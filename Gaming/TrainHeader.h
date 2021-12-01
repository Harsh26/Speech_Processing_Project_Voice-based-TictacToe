//#include "stdafx.h"

// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently

#pragma once

// Digit recognization.cpp : Defines the entry point for the console application.
//

#define N 5
#define M 32
#define p 12
#define T 85
#define stride 80
#define samples 320
#define maxFrames 150
#define no_of_digits 10
#define no_of_train_utterance 20
#define no_of_test_utterance 10
#define path "../TrimmedRecordings/214101020_"  //"C:\\\\Users\\\\rmkis\\\\Documents\\\\recordings\\\\214101062_"
#define FilePath "../BestModel/"  //"C:\\\\Users\\\\rmkis\\\\Documents\\\\Visual Studio 2010\\\\Projects\\\\AllWords\\\\BestModel\\\\"


long double del = 0.0001;  // Delta value
int codebook_size=1;
int digitMatch=0;
int OverallAcc=0;
long double epsilon =0.03;
vector<vector<int>> assignedR;
vector<vector<long double>> codebook;
long double waveform[100000];
long double Weights[12] = {1.0, 3.0, 7.0, 13.0, 19.0, 22.0, 25.0, 33.0, 42.0, 50.0, 56.0, 61.0};   // Tokhura Weights.
int digits[14]={0,1,2,3,4,5,6,7,8,9,10,11,12,13};

long double a[N+1][N+1];							   //A matrix
long double b[N+1][M+1];							   //B matrix
long double pi[N+1];								   //Pi matrix
long double a_mean[N+1][N+1];						   //Averaged A matrix
long double b_mean[N+1][M+1];						   // Averaged B matrix
long double pi_mean[N+1];                              //Averaged Pi matrix
long double alpha[maxFrames+1][N+1];				   //Forward variable
long double beta[maxFrames+1][N+1];					   //Backward variable
long double gamma[maxFrames+1][N+1];                   //
long double p_star[no_of_train_utterance+1];           //
int q_star_t[no_of_train_utterance+1][maxFrames+1];    //State sequence
long double delta[maxFrames+1][N+1];                   //
int psi[maxFrames+1][N+1];                             //
long double xi[maxFrames][N+1][N+1];                   //
long double final_prob_O_given_model ;                 //

//---------------------------------------DC Shift and Normalize----------------------------------------------\\

int normalize(FILE *input,FILE *output)
{
	long double max_val=0,DCS=0,no_of_samples=0;
	double norm_val=0,final_DCS=0;
	char frame[100];
	while(fgets(frame,sizeof(frame),input)!= NULL)//reading input from file
	{
			long double num=atoi(frame);//converting string to int for calculation purpose
			DCS=DCS+num;//summing up of all values
			no_of_samples++;//counting number of values
		
	}
	rewind(input);//placing cursor at start of file

	final_DCS=DCS/no_of_samples;//taking average of all samples

	//long double max_val=0;
	int i=0,max_index;
	while(fgets(frame,sizeof(frame),input)!= NULL)//reding input
	{
		i++;
		int num=atoi(frame);
		if(abs(num)>max_val)
		{
			max_val=abs(num);//this whole loop finds maximum of all absolue values
			max_index=i;
		}

	}
	rewind(input);

	while(fgets(frame,sizeof(frame),input)!= NULL)//reading input from file
	{
		long double num=atoi(frame);
		num-=final_DCS;
		fprintf(output,"%Lf\n",num);
		
	}
	rewind(input);

	norm_val=(max_val-5000)/(max_val*1.0);//calculating nomalization factor
	

	while(fgets(frame,sizeof(frame),input)!= NULL)
	{
		long double num=atoi(frame);
		long double final_norm_val=floor((num-final_DCS)*norm_val);
		if(labs(final_norm_val)>1)//avoiding unnecessary 0's,1's and -1's to be written in file
		{
			fprintf(output,"%Lf\n",final_norm_val);//writing normalized values in seperate file
        }
	}
	rewind(output);
	rewind(input);
	return max_index;
}
int extract(int start,int end)
{
	int sample_count=0;
	FILE *input,*output;
	fopen_s(&input,"normalized.txt","r");
	fopen_s(&output,"DumpedWord.txt","w");
	long double value;
	int count=0;
	//Extracting the word from normalized file

	while(fscanf(input,"%Lf\n",&value)!= EOF)
	{
		count++;
		if((count>=start)&&(count<=end))
		{
			fprintf(output, "%Lf\n",value);
			sample_count++;
		}
		if(count==end)
			break;
	}

	fclose(input);
	fclose(output);
	return sample_count;
}

//-------------------------------------------------Coeffecients-------------------------------------------------------//

void Ri(long double temp[samples],long double ri[13])
{ 
	FILE *output;
	output=fopen("Ri values.txt","w");
	memset(ri, 0, sizeof(ri));
	
     for(int j=0;j<=12;j++)
	 {
		 long double ri_val=0;
         for(int k=0;k<=samples-1-j;k++)
         {
              ri_val+=temp[k]*temp[k+j];           
         }
		 ri[j]=ri_val;                    //storing r_i values 
		 fprintf(output, "%Lf\n", ri[j]);
      }
	 fclose(output);
}

// Calculating Ai values using Levinson Durbins algorithm

void Ai(long double ri[13],long double ai[13])
{
	FILE *writer;
	writer=fopen("A_i.txt","w");
    double Ai[13][13]={{0}},e[13]={0},k[13]={0};
    e[0]=ri[0];
    for(int i=1;i<=12;i++)
    {
        double sum=0;
        for(int j=1;j<=i-1;j++)
        {
            sum=sum+(Ai[i-1][j]*ri[i-j]);
        }

        k[i]=(ri[i]-sum)/e[i-1];
        Ai[i][i]=k[i];

        for(int j=1;j<=i-1;j++)
        {
            Ai[i][j]=Ai[i-1][j]-k[i]*Ai[i-1][i-j];
        }
        e[i]=(1-(k[i]*k[i]))*e[i-1];

     }
     for(int i=1;i<=12;i++)
     {
        ai[i]=Ai[12][i];
		fprintf(writer, "%Lf\t", a[i]);
     }
    fclose(writer);
    
}
void raisedsin(long double ci[13])
{
	
    for(int j=1;j<=12;j++)
     {
         ci[j]*=(1+(12*1.0/2)*sin(3.14*j/12));
     }
    
}
void Ci(long double ri[13],long double ai[13],long double ci[13])
{
	FILE *op;
	fopen_s(&op,"CI.txt","w");
	   double sigma=ri[0];
       ci[0]=log10(sigma*sigma);
       for(int i=1;i<=12;i++)
       {
          double s=0;
          for(int j=1;j<=i-1;j++)
          {
              s+=(j/(i*1.0))*ci[j]*ai[i-j];
          }
          ci[i]=s+ai[i];
        }
	raisedsin(ci);
	for(int i=1;i<=12;i++)
	{
		fprintf(op, "%Lf\t", ci[i]);       //Printing cephstral coeffecients in a file
	}
	fclose(op);
}
void ExtractFrame(int Fnum,long double f[])
{
	FILE *input;
	fopen_s(&input,"Dumpedword.txt","r");
	long double value;
		int sample_count = 0, frame_start = 0, pos = 0;

		if(Fnum == 0) 	// for the first frame no stride is required
		{
			while(sample_count < samples)
			{
				fscanf(input,"%Lf\n",&value);
				f[pos] = value;
				pos++;
				sample_count++;
			}
		}

		else 		
		{
			//Striding by 80 frames
			while(frame_start < (stride * Fnum))
			{
				fscanf(input,"%Lf\n",&value);
				frame_start++;	
			}	

			while(sample_count < samples)
			{
				fscanf(input,"%Lf\n",&value);
				f[pos] = value;
				pos++;
				sample_count++;
			}

		}
		fclose(input);
}

//---------------------------------------------------------LBG Algorithm---------------------------------------------------//

//Calculating Tokhura distance
long double Tokhura(vector<long double>&currentU,vector<long double> &currrentC)
{
	long double sum=0;
	for(int i=0;i<12;i++)
	{
		long double x=currrentC[i]-currentU[i];
		sum+=(Weights[i]*(x*x));
	}
	return sum;
}


//Assigning Regions to vectors in universe
void Assignreg(vector<vector<long double>> &universe,vector<vector<long double>> &codebook)
{
	int rows=universe.size();
	for(int i=0;i<rows;i++)
	{
		int row=0;
		vector<long double>currentU = universe[i];
		long double minD=LDBL_MAX;
		for(int j=0;j<codebook_size;j++)
		{
			vector<long double> currrentC=codebook[j];
			long double distance=Tokhura(currentU,currrentC);
			if(distance<minD)
			{
				minD=distance;
				row=j;
			}
		}
		assignedR[row].push_back(i);
	}
	return;
}

//Calculating Distortion using Tokhura distance
long double Distortion(vector<vector<long double>> &universe,vector<vector<long double>> &codebook)
{
	int index=0;
	long double sum=0;
	long double D=0;
	for(int i=0;i<codebook_size;i++)
	{
		int row=assignedR[i].size();
	    sum+=long double(row);
		for(int j=0;j<row;j++)
		{
			index=assignedR[i][j];
			D+=Tokhura(universe[index],codebook[i]);
		}
		
	}
	D/=sum;
	return D;
}

//Update the Codebook from K means
void Update(vector<vector<long double>> &universe,vector<vector<long double>> &codebook)
{
    for(int i=0;i<codebook_size;i++)
	{
		vector<long double> temp(12, 0.0);
		int size = assignedR[i].size();
		for(int j=0;j<size;j++)
		{
			int index = assignedR[i][j];
			for(int k=0;k<12;k++)
			{
				temp[k] += universe[index][k];
			}
		}
		for(int j=0;j<12;j++)
		{
			codebook[i][j] = temp[j]/((long double)size); // Calculating the centroid and updating the region vector values.
		}
	}
	return;
}


//Using K means in LBG
void Kmeans(vector<vector<long double>> &universe,vector<vector<long double>> &codebook)
{
	assignedR.clear();
	assignedR.resize(codebook_size);
	long double d=0;
	Assignreg(universe,codebook);
	long double D=Distortion(universe,codebook);
	int m=0;
	//cout<<"Total Distortion in Cycle "<<m+1<<": "<<D<<" Distortion Change: "<<fixed<<setprecision(6)<<abs(D-d)<<endl;
	while(abs(D-d)>del)
	{
		Update(universe,codebook);
		assignedR.clear();
		assignedR.resize(codebook_size);
		Assignreg(universe,codebook);
		d=D;
		D=Distortion(universe,codebook);
		m++;
		//cout<<"Total Distortion in Cycle "<<m+1<<": "<<D<<" Distortion Change: "<<fixed<<setprecision(6)<<abs(D-d)<<endl;
	}
	return;
}

//Updating Codebook using LBG algo after doubling its size
void UpdateCodebook(vector<vector<long double>> &codebook,vector<vector<long double>> &temp)
{
	int rows=temp.size();
	for(int i=0;i<rows;i++)
	{
		vector<long double>temp1;
		vector<long double>temp2;
		for(int j=0;j<12;j++)
		{
			long double x=temp[i][j]*(1+epsilon);
			long double y=temp[i][j]*(1-epsilon);
			temp1.push_back(x);
			temp2.push_back(y);
		}
		codebook.push_back(temp1);
		codebook.push_back(temp2);
	}
	return;
}


//LBG algorithm
void LBG(vector<vector<long double>> &universe,vector<vector<long double>> &codebook)
{
	int m=0;
	while(codebook_size<=M)
	{
		Kmeans(universe,codebook);
		//cout<<"\nCodeBook Size doubled ,New codebook size: "<<codebook_size<<endl;
		//cout<<"New CodeBook Generated By LBG Algorithm Cycle "<<m+1<<":"<<endl;
		//cout<<"New Codebook:\n";
		int row = codebook.size();
	    if(row == 0)
		{
		   return;
	    }
	   // int col = codebook[0].size();
     	
		m++;
		if(codebook_size==M)
			return;
		vector<vector<long double>> temp=codebook;//storing the codebook before doubling its size
		codebook.clear();
		codebook_size*=2;
		UpdateCodebook(codebook,temp);
	}
	return;
}


//------------------------------------Generating Observation Sequence from Codebook------------------------------------//

void GetObsSeq(long double c_i[],int Obs[],int num)
{
	int codebook_index;
	long double dist[M],difference,min;
	for(int j=0;j<M;j++)
	{
		long double sum = 0;
		for(int i=1; i<=p;i++)
		{
			difference = c_i[i] - codebook[j][i-1];
			sum += Weights[i-1] * difference * difference;
		}

		dist[j] = sum;
	}

	codebook_index = 0;
	min = dist[codebook_index];
	
	for(int i = 1; i < M; i++)
	{
		if(dist[i]<min)
			{
				codebook_index = i;
				min = dist[i];
			}
	}

	Obs[num] = codebook_index + 1; //codebook index with minimum distance is stored in Observation sequence 
	//codebook_index+1 is done as codebook index starts from 0 and state sequence starts from 1

}
void initialize_all_HMM_globals()
{
	memset(a, 0, sizeof(a[0][0]) * N+1 * N+1);
	memset(b, 0, sizeof(b[0][0]) * M+1 * N+1);
	memset(pi, 0, sizeof(pi));
	memset(a_mean, 0, sizeof(a_mean[0][0]) * N+1 * N+1);
	memset(b_mean, 0, sizeof(b_mean[0][0]) * M+1 * N+1);
	memset(pi_mean, 0, sizeof(pi_mean));
}
void initialize_all_HMM_parameters()	
{
	memset(a, 0, sizeof(a[0][0]) * N+1 * N+1);
	memset(b, 0, sizeof(b[0][0]) * M+1 * N+1);
	memset(pi, 0, sizeof(pi));
	memset(alpha, 0, sizeof(alpha[0][0]) * N+1 * maxFrames);
	memset(beta, 0, sizeof(beta[0][0]) * M+1 * maxFrames);
	memset(gamma, 0, sizeof(gamma[0][0])*N+1* maxFrames);
	memset(psi, 0, sizeof(psi[0][0]) * N * maxFrames);
	memset(delta, 0, sizeof(delta[0][0]) * N * maxFrames);	
	memset(q_star_t, 0, sizeof(q_star_t[0][0]) * maxFrames * no_of_train_utterance);
	memset(p_star, 0, no_of_train_utterance);


}
void AddMeanModel()
{
	for(int i=1;i<=N;i++)
	{
		pi_mean[i]+=pi[i];
	}

	for(int i = 1;i <=N; i++)
	{
		for(int j = 1; j <=N; j++)
		{
			a_mean[i][j] += a[i][j];// Mean of all A matrices
		}
	}

	for(int i = 1; i <=N; i++)
	{
		for(int j = 1; j <=M; j++)
		{
			b_mean[i][j] += b[i][j];//Mean of all B matrices
		}
	}

}

long double power(int i, int j)	
{
	long double res = 1;
	int k;
	if(j < 0)
	{
		for(k = j; k < 0; k++)
			res /= i;
	}
	else
	{
		for(k = j; k > 0; k--)
			res *= i;
	}

	return res;
}

//Finding max value in each row of B to make it stochaistic matrix 
int find_B_rowmax(int j)
{
	int k, max_index;
	long double max_b;

	max_index = 0;
	max_b = b[j][0];

	for(k = 1; k <= M; k++)
	{
		if(b[j][k] > max_b)
		{
			max_b = b[j][k];
			max_index = k;
		}
	}

	return k;
}

long double sol1(int Obs[])
{
	long double alpha_ij,beta_ji;
    
	memset(alpha, 0, sizeof(alpha[0][0]) * maxFrames+1 * N+1);
	//1) Initialize
	//cout<<Obs[1]<<"\t";
	
	for(int i=1;i<=N;i++)
	{
		alpha[1][i]=pi[i]*b[i][Obs[1]];
		//cout<<b[i][Obs[1]]<<"\t";
	}
	//2)Induction
	for(int t=1;t<=T-1;t++)
	{
		for(int j=1;j<=N;j++)
		{
			alpha_ij=0;
			for(int i=1;i<=N;i++)
			{
				alpha_ij+=alpha[t][i]*a[i][j];
			}
			//cout<<b[j][Obs[t+1]]<<"\t";
			alpha[t+1][j]=alpha_ij * b[j][Obs[t+1]];
			//cout<<alpha[t+1][j]<<"\t";
		}
	}
	long double prob_O_given_model=0;
	//3)Termination
	for(int i=1;i<=N;i++)
	{
		//cout<<alpha[T][i]<<"\t";
		prob_O_given_model+=alpha[T][i];
	}

   //Backward Procedure
	//1) Initialize
	for(int i=1;i<=N;i++)
	{
		beta[T][i]=1;
	}
	//2) Induction
	for(int t =T-1;t>=1;t--)
	{
		for(int i=1;i<=N;i++)
		{
			beta_ji = 0;
			for(int j=1;j<=N;j++)
			{
				beta_ji += a[i][j] * b[j][Obs[t+1]] * beta[t+1][j];
			}
			beta[t][i] = beta_ji;
		}
	}
	//cout<<"\nP(O/model): "<<prob_O_given_model<<endl;
	final_prob_O_given_model=prob_O_given_model;
	return prob_O_given_model;
}

void sol2(int model,int Obs[])
{
	long double den,prod,num;
	memset(gamma, 0, sizeof(gamma[0][0]) * N+1 * T+1);
	//Gamma calculation
	for(int t=1;t<=T;t++)
	{
		den = 0;
		for(int i=1;i<=N;i++)
		{
			prod = alpha[t][i] * beta[t][i];
			gamma[t][i] = prod;
			den += prod;
		}

		for(int i=1;i<=N;i++)
		{
			if(den!=0)
			   gamma[t][i] /= den;
		}
	}
	long double max_del=0,del=0;
	// 1)initialization
	memset(delta, 0, sizeof(delta[0][0]) * N+1 * T+1);
	memset(psi, 0, sizeof(psi[0][0]) * N+1 * T+1);
	for(int i=1;i<=N;i++)
	{
		delta[1][i]=pi[i] * b[i][Obs[1]];
		psi[1][i]=0;
	}
	// 2)recursion
	
	for(int t=2;t<=T;t++)
	{
		for(int j=1;j<=N;j++)
		{
			max_del=INT_MIN;

			for(int i=1;i<=N;i++)
			{
				del = delta[t-1][i] * a[i][j];
				if(del > max_del)
				{
					max_del = del;
					psi[t][j] = i;
				}
			}
			delta[t][j] = max_del * b[j][Obs[t]];
		}
	}

	// 3) Termination
	
	long double max_prob_T=INT_MIN;				

	for(int i=1;i<=N;i++)
	{
		if(delta[T][i] > max_prob_T)
		{
			max_prob_T = delta[T][i];
			q_star_t[model][T] = i;
		}
	}


	// 4) Path backtracking
	
	for(int t=T-1;t>=1;t--)
		q_star_t[model][t] = psi[t+1][q_star_t[model][t+1]];

	//printf("\nP* = %g", max_prob_T);
	p_star[model] = max_prob_T;
	//long int x=find_order(max_prob_T);
	//printf("\nP* order (in powers of 10): %ld", x);
	//printf("\nState seq: ");
//	for(int t = 1; t <= T; t++)
		//printf("%d ", q_star_t[t]);
}

void sol3(int Obs[])
{	
	long double den,prod,num,threshold;
	int max_b_index,b_zeros=0;
	//xi values
	for(int t=1;t<=T-1;t++)
	{
		den = 0;
		for(int i=1;i<=N;i++)
		{
			for(int j=1;j<=N;j++)
			{
				prod = alpha[t][i] * a[i][j] * b[j][Obs[t+1]] * beta[t+1][j];
				xi[t][i][j] = prod;
				den += prod;
			}
		}


		for(int i=1;i<=N;i++)
		{
			for(int j=1;j<=N;j++)
			{
				if(den!=0)
				   xi[t][i][j] /= den;			
			}
		}
	}
	threshold=power(10,-30);
	//cout<<threshold<<endl;

	//new pi
	for(int i=1;i<=N;i++)
	{
		pi[i] = gamma[1][i];
	}
	//pi[N+1]=new_pi[N+1];
	// new A
	for(int i=1;i<=N;i++)
	{
		den = 0;
		for(int t_dash=1;t_dash<=T-1;t_dash++)
		{
			den += gamma[t_dash][i];		
		}

		for(int j=1;j<=N;j++)
		{
			num = 0; 
			for(int t=1;t<=T-1;t++)
			{
				num += xi[t][i][j];
			}
			if(den!=0)
			{
				a[i][j] = num / den;
			}
		}
	}

	// new B
	for(int j = 1; j <=N; j++)
	{
		den = 0;
		for(int t_dash=1;t_dash<=T;t_dash++)
		{
			den += gamma[t_dash][j];
		}
		b_zeros=0;
		for(int k=1;k<=M;k++)
		{
			num = 0;
			for(int t=1;t<=T;t++)
			{
				if(Obs[t]==k)
					num+= gamma[t][j];
			}
			if(den!=0)
			{
			   b[j][k] = num/ den;
			}
		}
		max_b_index=find_B_rowmax(j);
		for(int k=1;k<=M;k++)
		{
			if(b[j][k] <= threshold)
			{
				b_zeros++;
				
				b[j][k] += threshold;
			}
		}

		// subtracting value from max value of each row
		b[j][max_b_index] -= b_zeros * threshold;  
	}	
	
}

void HMM(int Obs[])
{
	int j = 0;
	long double OldprobOgivenMod, NewprobOgivenMod;

	memset(q_star_t, 0, sizeof(q_star_t[1][1]) * maxFrames+1 * no_of_train_utterance+1);
	memset(p_star, 0, no_of_train_utterance+1);

	OldprobOgivenMod = sol1(Obs);			
	sol2(j,Obs);	
	sol3(Obs);
	
	for(j = 1; j < 20; j++)
	{
		NewprobOgivenMod = sol1(Obs);
		OldprobOgivenMod = NewprobOgivenMod;
		sol2(j,Obs);
		sol3(Obs);
	}
	
}
//Finding average model for each digit
void FindAvgModel()
{
	for(int i = 1; i <=N; i++)
	{
		pi_mean[i] /= no_of_train_utterance;
	}

	// mean A 
	for(int i = 1;i<=N;i++)
	{
		for(int j = 1; j<=N;j++)
		{
			a_mean[i][j] /= no_of_train_utterance;
		}
	}

	// mean B
	for(int i = 1; i<=N; i++)
	{
		for(int j = 1; j<=M; j++)
		{
			b_mean[i][j] /= no_of_train_utterance;
		}
	}
}
void WriteAvgModel(int digit)
{
	char fileA[10000],fileB[10000],filePi[10000];
	if(digit<10)
	{
	_snprintf(fileA,sizeof(fileA),"%s%s%d%s",FilePath,"NewBestModel_A_",digit,".txt");
	_snprintf(fileB,sizeof(fileB),"%s%s%d%s",FilePath,"NewBestModel_B_",digit,".txt");
	_snprintf(filePi,sizeof(filePi),"%s%s%d%s",FilePath,"NewBestModel_Pi_",digit,".txt");
	}
	else if(digit==10)
	{
	_snprintf(fileA,sizeof(fileA),"%s%s%s%s",FilePath,"NewBestModel_A_","Pause",".txt");
	_snprintf(fileB,sizeof(fileB),"%s%s%s%s",FilePath,"NewBestModel_B_","Pause",".txt");
	_snprintf(filePi,sizeof(filePi),"%s%s%s%s",FilePath,"NewBestModel_Pi_","Pause",".txt");
	}
	else if(digit==12)
	{
	_snprintf(fileA,sizeof(fileA),"%s%s%s%s",FilePath,"NewBestModel_A_","Resume",".txt");
	_snprintf(fileB,sizeof(fileB),"%s%s%s%s",FilePath,"NewBestModel_B_","Resume",".txt");
	_snprintf(filePi,sizeof(filePi),"%s%s%s%s",FilePath,"NewBestModel_Pi_","Resume",".txt");
	}
	else if(digit==13)
	{
	_snprintf(fileA,sizeof(fileA),"%s%s%s%s",FilePath,"NewBestModel_A_","Begin",".txt");
	_snprintf(fileB,sizeof(fileB),"%s%s%s%s",FilePath,"NewBestModel_B_","Begin",".txt");
	_snprintf(filePi,sizeof(filePi),"%s%s%s%s",FilePath,"NewBestModel_Pi_","Begin",".txt");
	}
	else if(digit==11)
	{
	_snprintf(fileA,sizeof(fileA),"%s%s%s%s",FilePath,"NewBestModel_A_","End",".txt");
	_snprintf(fileB,sizeof(fileB),"%s%s%s%s",FilePath,"NewBestModel_B_","End",".txt");
	_snprintf(filePi,sizeof(filePi),"%s%s%s%s",FilePath,"NewBestModel_Pi_","End",".txt");
	}
	FILE *write_A,*write_B,*write_Pi;
	fopen_s(&write_A,fileA,"w");
	fopen_s(&write_B,fileB,"w");
	fopen_s(&write_Pi,filePi,"w");

	for(int i = 1; i <=N; i++)
	{
			fprintf(write_Pi, "%0.40Lf\t", pi_mean[i]);
	}

	// mean A 
	for(int i = 1;i<=N;i++)
	{
		for(int j = 1; j<=N;j++)
		{
			fprintf(write_A, "%0.40Lf\t", a_mean[i][j]);
		}
		fprintf(write_A, "\n");
	}

	// mean B
	for(int i = 1; i<=N; i++)
	{
		for(int j = 1; j<=M; j++)
		{
			fprintf(write_B, "%0.40Lf\t", b_mean[i][j]);
		}
		fprintf(write_B, "\n");
	}
	fclose(write_A);
	fclose(write_B);
	fclose(write_Pi);

}
void ReadAvgModel(int digit)
{
	long double val;
	char fileA[10000],fileB[10000],filePi[10000];
	if(digit<10)
	{
	_snprintf(fileA,sizeof(fileA),"%s%s%d%s",FilePath,"BestModel_A_",digit,".txt");
	_snprintf(fileB,sizeof(fileB),"%s%s%d%s",FilePath,"BestModel_B_",digit,".txt");
	_snprintf(filePi,sizeof(filePi),"%s%s%d%s",FilePath,"BestModel_Pi_",digit,".txt");
	}
	else if(digit==10)
	{
	_snprintf(fileA,sizeof(fileA),"%s%s%s%s",FilePath,"BestModel_A_","Pause",".txt");
	_snprintf(fileB,sizeof(fileB),"%s%s%s%s",FilePath,"BestModel_B_","Pause",".txt");
	_snprintf(filePi,sizeof(filePi),"%s%s%s%s",FilePath,"BestModel_Pi_","Pause",".txt");
	}
	else if(digit==12)
	{
	_snprintf(fileA,sizeof(fileA),"%s%s%s%s",FilePath,"BestModel_A_","Resume",".txt");
	_snprintf(fileB,sizeof(fileB),"%s%s%s%s",FilePath,"BestModel_B_","Resume",".txt");
	_snprintf(filePi,sizeof(filePi),"%s%s%s%s",FilePath,"BestModel_Pi_","Resume",".txt");
	}
	else if(digit==13)
	{
	_snprintf(fileA,sizeof(fileA),"%s%s%s%s",FilePath,"BestModel_A_","Begin",".txt");
	_snprintf(fileB,sizeof(fileB),"%s%s%s%s",FilePath,"BestModel_B_","Begin",".txt");
	_snprintf(filePi,sizeof(filePi),"%s%s%s%s",FilePath,"BestModel_Pi_","Begin",".txt");
	}
	else if(digit==11)
	{
	_snprintf(fileA,sizeof(fileA),"%s%s%s%s",FilePath,"BestModel_A_","End",".txt");
	_snprintf(fileB,sizeof(fileB),"%s%s%s%s",FilePath,"BestModel_B_","End",".txt");
	_snprintf(filePi,sizeof(filePi),"%s%s%s%s",FilePath,"BestModel_Pi_","End",".txt");
	}

	
	FILE *read_A, *read_B, *read_Pi;
	fopen_s(&read_A,fileA,"r");
	fopen_s(&read_B,fileB,"r");
	fopen_s(&read_Pi,filePi,"r");


	for(int i = 1; i <=N; i++)
	{
			fscanf(read_Pi, "%Lf", &val);
			pi[i]=val;
	}

	// mean A 
	for(int i = 1;i<=N;i++)
	{
		for(int j = 1; j<=N;j++)
		{
			fscanf(read_A, "%Lf", &val);
			a[i][j]=val;
		}
	}

	// mean B
	for(int i = 1; i<=N; i++)
	{
		for(int j = 1; j<=M; j++)
		{
			fscanf(read_B, "%Lf", &val);
			b[i][j]=val;
		}
	}
	fclose(read_A);
	fclose(read_B);
	fclose(read_Pi);
}
//Reading Feed Forward model only for first time
void ReadFeedFwdmodel()
{
	ifstream f1,f2,f3;
	long double val;
	
	f1.open("A.txt");
	if(f1 != NULL)
	{
		for(int i=1;i<=N;i++)
		{
			for(int j=1;j<=N;j++)
			{
			    f1 >> val;	
				a[i][j] = val;
				
			}
		}
	}
	f1.close();
	f2.open("B.txt");
	if(f2 != NULL)
	{
		for(int i=1;i<=N;i++)
		{
			for(int j=1;j<= M;j++)
			{
		        f2>>val;
				b[i][j] = val;
			}
		}
	}
	f2.close();
	
	f3.open("Pi.txt");
	if(f3 != NULL)
	{
		for(int i=1;i<=N;i++)
		{
			f3>>val; 
			pi[i] = val;
			
		}
	}
	f3.close();	


}

void  ProcessTraining(bool training, int digit,int utterance,int avg,long double f[],long double r_i[],long double a_i[],long double c_i[])
{
	//cout<<"in\n";
	FILE *input,*norm_input;
	char filepath[10000];
	int Obs[maxFrames+1];
	
	
		//open the files
	_snprintf(filepath,sizeof(filepath),"%s%d%s%d%s",path,digit,"_",utterance,".txt");        //Opening pre recorded file
	fopen_s(&input,filepath,"r");
	
	if(input == NULL)
		printf("Can't read  fileP");
	
	fopen_s(&norm_input,"normalized.txt","w");

	//cout<<"\nopened \n";

	//DC shift and normalization			
	int max_index=normalize(input,norm_input);										//Normalizing the input and storing peak energy index
	fclose(input);
	fclose(norm_input);
	//cout<<"Norm done\n";

	//Finding start and end of the digit spoken 
	int word_start, word_end;

	//7040 is used to get frames of length 85
	word_start = max_index - 7040/2;
	word_end = max_index + 7040/2 -1;

	//Extracting the word
	int Scount=extract(word_start,word_end);
	int temp=((Scount-samples)/80)+1;//no of frames in extracted word
	int frameCount=85;
	//cout<<temp<<endl;
	/*if(temp<=maxFrames)
		frameCount=temp;
	else
		frameCount=maxFrames;*/

	for(int Fnum=1;Fnum<=frameCount;Fnum++)
	{
		memset(f, 0, sizeof(f));
		memset(r_i, 0, sizeof(r_i));
		memset(a_i, 0, sizeof(a_i));
		memset(c_i, 0, sizeof(c_i));
		
		ExtractFrame(Fnum,f);

		//Coeffecients computation
		Ri(f,r_i);
		Ai(r_i,a_i);
		Ci(r_i,a_i,c_i);
		//Generating Observation sequence for each frame number
		GetObsSeq(c_i,Obs,Fnum);
	}
	
	initialize_all_HMM_parameters();
	if(avg==0)
	{
		ReadFeedFwdmodel();				
	}
	else
	{
		ReadAvgModel(digit);
	}
	
	HMM(Obs);
	AddMeanModel();
	
	
		
	

}

//--------------------------------------------------------------Training-----------------------------------------------------------------//

void Training(int digit)
{
	
	bool training=true;
	long double f[samples];
	long double r_i[p+1];	
	long double a_i[p+1];
	long double c_i[p+1];	


	vector<vector<long double>> universe;

	
	cout<<"codebook read\n";
	FILE *codebookfile;
	vector<long double>temp(12,0.0);
	codebookfile=fopen("codebook.txt","r");
	for(int i=0;i<32;i++)
	{
		for(int j=0;j<12;j++)
		{
			fscanf(codebookfile, "%Lf", &temp[j]);
		}
		codebook.push_back(temp);
		//fprintf(codebookfile, "\n");
	}
	fclose(codebookfile);
	
	
	//cout<<"Training started\n";
	//for(int digit=0;digit<10;digit++)
	//{
		//cout<<"Digit: "<<digit<<endl;
		for(int avg=0;avg<3;avg++)
		{
      		//cout<<"Avging: "<<avg<<endl;
			for(int utterance=1;utterance <= 20;utterance++)
		    {
				ProcessTraining(true,digit,utterance,avg,f,r_i,a_i,c_i);
				
			}
			FindAvgModel();
		    WriteAvgModel(digit);
			
		}
		
	//}
	
	return ;
}


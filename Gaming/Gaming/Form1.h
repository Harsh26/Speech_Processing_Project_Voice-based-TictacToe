#pragma once
#include "stdafx.h"
#include "help.h"
namespace Gaming {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

		String^ digit;
		int recognized_digit;
	private: System::Windows::Forms::Button^  button1;




	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox4;


	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	public: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::TextBox^  textBox14;
	public: 
	private: System::Windows::Forms::Label^  label8;
	private: 

	private: System::ComponentModel::IContainer^  components;

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(274, 78);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 41);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Game";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(266, 20);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(142, 46);
			this->label3->TabIndex = 5;
			this->label3->Text = L"MENU";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(395, 207);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(116, 17);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Word recognized";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(535, 207);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(122, 22);
			this->textBox3->TabIndex = 7;
			this->textBox3->Text = L"word";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(404, 240);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(92, 17);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Conformation";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(535, 240);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(122, 22);
			this->textBox4->TabIndex = 9;
			this->textBox4->Text = L"y/n";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::Black;
			this->textBox5->ForeColor = System::Drawing::Color::White;
			this->textBox5->Location = System::Drawing::Point(13, 27);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(32, 22);
			this->textBox5->TabIndex = 12;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Form1::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::Black;
			this->textBox6->ForeColor = System::Drawing::Color::White;
			this->textBox6->Location = System::Drawing::Point(51, 27);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(33, 22);
			this->textBox6->TabIndex = 13;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Form1::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::Black;
			this->textBox7->ForeColor = System::Drawing::Color::White;
			this->textBox7->Location = System::Drawing::Point(87, 27);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(30, 22);
			this->textBox7->TabIndex = 14;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &Form1::textBox7_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::Black;
			this->textBox8->ForeColor = System::Drawing::Color::White;
			this->textBox8->Location = System::Drawing::Point(13, 55);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(32, 22);
			this->textBox8->TabIndex = 15;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &Form1::textBox8_TextChanged);
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::Black;
			this->textBox9->ForeColor = System::Drawing::Color::White;
			this->textBox9->Location = System::Drawing::Point(51, 55);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(30, 22);
			this->textBox9->TabIndex = 16;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &Form1::textBox9_TextChanged);
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::Black;
			this->textBox10->ForeColor = System::Drawing::Color::White;
			this->textBox10->Location = System::Drawing::Point(87, 55);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(30, 22);
			this->textBox10->TabIndex = 17;
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::Black;
			this->textBox11->ForeColor = System::Drawing::Color::White;
			this->textBox11->Location = System::Drawing::Point(13, 83);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(32, 22);
			this->textBox11->TabIndex = 18;
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::SystemColors::WindowText;
			this->textBox12->ForeColor = System::Drawing::Color::White;
			this->textBox12->Location = System::Drawing::Point(49, 83);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(32, 22);
			this->textBox12->TabIndex = 19;
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::Color::Black;
			this->textBox13->ForeColor = System::Drawing::Color::White;
			this->textBox13->Location = System::Drawing::Point(87, 83);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(30, 22);
			this->textBox13->TabIndex = 20;
			this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox3->Controls->Add(this->textBox13);
			this->groupBox3->Controls->Add(this->textBox12);
			this->groupBox3->Controls->Add(this->textBox11);
			this->groupBox3->Controls->Add(this->textBox10);
			this->groupBox3->Controls->Add(this->textBox9);
			this->groupBox3->Controls->Add(this->textBox8);
			this->groupBox3->Controls->Add(this->textBox7);
			this->groupBox3->Controls->Add(this->textBox6);
			this->groupBox3->Controls->Add(this->textBox5);
			this->groupBox3->Location = System::Drawing::Point(274, 323);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(134, 124);
			this->groupBox3->TabIndex = 21;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Game Matrix";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 207);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(116, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Word recognized";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox1->Location = System::Drawing::Point(177, 207);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(122, 22);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"word";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(49, 240);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Conformation";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(177, 240);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(122, 22);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"y/n";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(118, 166);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 17);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Player X";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(484, 166);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(63, 17);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Player O";
			this->label7->Click += gcnew System::EventHandler(this, &Form1::label7_Click_1);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 2000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(313, 128);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(116, 22);
			this->textBox14->TabIndex = 24;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(259, 131);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(48, 17);
			this->label8->TabIndex = 25;
			this->label8->Text = L"Result";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(748, 498);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 int Player=1;
				 bool training=true;
					long double f[samples];
					long double r_i[p+1];	
					long double a_i[p+1];
					long double c_i[p+1];
					
					textBox5->Text="1";
					textBox6->Text="2";
					textBox7->Text="3";
					textBox8->Text="4";
					textBox9->Text="5";
					textBox10->Text="6";
					textBox11->Text="7";
					textBox12->Text="8";
					textBox13->Text="9";
					textBox5->Refresh();
					textBox6->Refresh();
					textBox7->Refresh();
					textBox8->Refresh();
					textBox9->Refresh();
					textBox10->Refresh();
					textBox11->Refresh();
					textBox12->Refresh();
					textBox13->Refresh();
					ReadCodebook();
				 while(1)
				 {
					textBox1->Text="";
					textBox1->Refresh();
					textBox2->Text="";
					textBox2->Refresh();
					textBox3->Text="";
					textBox3->Refresh();
					textBox4->Text="";
					textBox4->Refresh();
					Sleep(2000);
					char c;
					if(Player==1)
					{
					    c='X';
					    system("Recording_Module.exe 3 input_file.wav input_file.txt");
						recognized_digit=Processing(false,-1,-1,-1,f,r_i,a_i,c_i);
					    digit=System::Convert::ToString(recognized_digit);
						if(recognized_digit==10)
						{
							textBox1->Text="PAUSE";
							textBox1->Refresh();
							//Sleep(10000);
						}
						else if(recognized_digit==13)
						{
							textBox1->Text="END";
							textBox1->Refresh();
							//Sleep(2000);
							
						}
						else
						{
							textBox1->Text=digit;
							textBox1->Refresh();
						}
						Sleep(3000);
						
						system("Recording_Module.exe 3 input_file.wav input_file.txt");
						
						FILE *ip;
						fopen_s(&ip,"input_file.txt","r");
		
						int flag=detectYesorNo(ip);
						fclose(ip);
							
						if(flag==1)
						{
							textBox2->Text="YES";
							textBox2->Refresh();
							Sleep(2000);
							if(flag==1 && recognized_digit==10)
							{
								Sleep(10000);
								continue;
							}
							if(flag==1 && recognized_digit==13)
							{
								
								exit(0);
				
							}
							Yes(recognized_digit,c);
							
								
						}
						else
						{
							textBox2->Text="NO";
							textBox2->Refresh();
							Sleep(3000);
							do
							{
								textBox1->Text="";
								textBox1->Refresh();
								textBox2->Text="";
								textBox2->Refresh();
								Sleep(1000);
								system("Recording_Module.exe 3 input_file.wav input_file.txt");
								recognized_digit=Processing(false,-1,-1,-1,f,r_i,a_i,c_i);
								digit=System::Convert::ToString(recognized_digit);
								if(recognized_digit==10)
								{
									textBox1->Text="PAUSE";
									textBox1->Refresh();
									//Sleep(10000);
								}
								else if(recognized_digit==13)
								{
									textBox1->Text="END";
									textBox1->Refresh();
									Sleep(2000);
									//break;
								}
								else
								{
									textBox1->Text=digit;
									textBox1->Refresh();
								}
								Sleep(3000);
								system("Recording_Module.exe 3 input_file.wav input_file.txt");
								FILE *ip;
								fopen_s(&ip,"input_file.txt","r");
								flag=detectYesorNo(ip);
								if(flag==1)
								{
									textBox2->Text="YES";
									textBox2->Refresh();

									if(flag==1 && recognized_digit==10)
									{
										Sleep(10000);
										continue;
									}
									if(flag==1 && recognized_digit==13)
									{
										exit(0);
									}
									

								}
								else
								{
									textBox2->Text="NO";
									textBox2->Refresh();
								}
								Sleep(3000);
							}while(flag==0);

							
							Yes(recognized_digit,c);

						}
						
						int num1;
						if(matrix[0][0]=='X')
						{
							textBox5->Text="X";
						}
						else if( matrix[0][0]=='O')
						{
							textBox5->Text="O";
						}
						else
						{
							 num1=matrix[0][0]-'0';
							textBox5->Text=System::Convert::ToString(num1);
						}

						if(matrix[0][1]=='X')
						{
							textBox6->Text="X";
						}
					    else if(matrix[0][1]=='O')
						{
							 textBox6->Text="O";
						}
						else
						{
							 num1=matrix[0][1]-'0';
							textBox6->Text=System::Convert::ToString(num1);
						}
						if(matrix[0][2]=='X')
						{
							textBox7->Text="X";
						}
						else if(matrix[0][2]=='O')
						{
							 textBox7->Text="O";
						}
						else
						{
							 num1=matrix[0][2]-'0';
							textBox7->Text=System::Convert::ToString(num1);
						}

						
						if(matrix[1][0]=='X')
						{
							textBox8->Text="X";
						}
						else if( matrix[1][0]=='O')
						{
							textBox8->Text="O";
						}
						else
						{
							 num1=matrix[1][0]-'0';
							textBox8->Text=System::Convert::ToString(num1);
						}

						if(matrix[1][1]=='X')
						{
							textBox9->Text="X";
						}
					    else if(matrix[1][1]=='O')
						{
							 textBox9->Text="O";
						}
						else
						{
							 num1=matrix[1][1]-'0';
							textBox9->Text=System::Convert::ToString(num1);
						}
						if(matrix[1][2]=='X')
						{
							textBox10->Text="X";
						}
						else if(matrix[1][2]=='O')
						{
							 textBox10->Text="O";
						}
						else
						{
							 num1=matrix[1][2]-'0';
							textBox10->Text=System::Convert::ToString(num1);
						}

						if(matrix[2][0]=='X')
						{
							textBox11->Text="X";
						}
						else if( matrix[2][0]=='O')
						{
							textBox11->Text="O";
						}
						else
						{
							 num1=matrix[2][0]-'0';
							textBox11->Text=System::Convert::ToString(num1);
						}

						if(matrix[2][1]=='X')
						{
							textBox12->Text="X";
						}
					    else if(matrix[2][1]=='O')
						{
							 textBox12->Text="O";
						}
						else
						{
							 num1=matrix[2][1]-'0';
							textBox12->Text=System::Convert::ToString(num1);
						}
						if(matrix[2][2]=='X')
						{
							textBox13->Text="X";
						}
						else if(matrix[2][2]=='O')
						{
							 textBox13->Text="O";
						}
						else
						{
							 num1=matrix[2][2]-'0';
							textBox13->Text=System::Convert::ToString(num1);
						}

						


						textBox5->Refresh();
						textBox6->Refresh();
						textBox7->Refresh();
						textBox8->Refresh();
						textBox9->Refresh();
						textBox10->Refresh();
						textBox11->Refresh();
						textBox12->Refresh();
						textBox13->Refresh();
						
						if(CheckResult()==1 || CheckResult()==-1)
						{
							textBox14->Text="Game Over";
							textBox14->Refresh();
							break;
						}
						fclose(ip);
					    Player=0;
						Sleep(3000);
					
					}
					else if(Player==0)
					{
						c='O';
						
						system("Recording_Module.exe 3 input_file.wav input_file.txt");
						recognized_digit=Processing(false,-1,-1,-1,f,r_i,a_i,c_i);
					    digit=System::Convert::ToString(recognized_digit);
						if(recognized_digit==10)
						{
							textBox3->Text="PAUSE";
							textBox3->Refresh();
							
						}
						else if(recognized_digit==13)
						{
							textBox3->Text="END";
							textBox3->Refresh();
							//Sleep(2000);
							//break;
						}
						else
						{
							textBox3->Text=digit;
							textBox3->Refresh();
						}
						Sleep(3000);
						
						system("Recording_Module.exe 3 input_file.wav input_file.txt");
						
						FILE *ip;
						fopen_s(&ip,"input_file.txt","r");
		
						int flag=detectYesorNo(ip);
						fclose(ip);
							
						if(flag==1)
						{
							textBox4->Text="YES";
							textBox4->Refresh();
							if(flag==1 && recognized_digit==10)
							{
								Sleep(10000);
								continue;
							}
							if(flag==1 && recognized_digit==11)
							{
								exit(0);
				
							}
							Yes(recognized_digit,c);
								
						}
						else
						{
							textBox4->Text="NO";
							textBox4->Refresh();
							Sleep(2000);
							do
							{
								textBox3->Text="";
								textBox3->Refresh();
								textBox4->Text="";
								textBox4->Refresh();
								Sleep(1000);
								system("Recording_Module.exe 3 input_file.wav input_file.txt");
								recognized_digit=Processing(false,-1,-1,-1,f,r_i,a_i,c_i);
								digit=System::Convert::ToString(recognized_digit);
								if(recognized_digit==10)
								{
									textBox3->Text="PAUSE";
									textBox3->Refresh();
									//Sleep(10000);
								}
								else if(recognized_digit==13)
								{
									textBox3->Text="END";
									textBox3->Refresh();
									//Sleep(2000);
									//break;
								}
								else
								{
									textBox3->Text=digit;
									textBox3->Refresh();
								}
								Sleep(3000);
								system("Recording_Module.exe 3 input_file.wav input_file.txt");
								FILE *ip;
								fopen_s(&ip,"input_file.txt","r");
								flag=detectYesorNo(ip);
								if(flag==1)
								{
									textBox4->Text="YES";
									textBox4->Refresh();
									if(flag==1 && recognized_digit==10)
									{
										Sleep(10000);
										continue;
									}
									if(flag==1 && recognized_digit==13)
									{
										exit(0);
									}
									

								}
								else
								{
									textBox4->Text="NO";
									textBox4->Refresh();
								}
								Sleep(3000);
							}while(flag==0);
							
							Yes(recognized_digit,c);

						}
						int num1;
						if(matrix[0][0]=='X')
						{
							textBox5->Text="X";
						}
						else if( matrix[0][0]=='O')
						{
							textBox5->Text="O";
						}
						else
						{
							 num1=matrix[0][0]-'0';
							textBox5->Text=System::Convert::ToString(num1);
						}

						if(matrix[0][1]=='X')
						{
							textBox6->Text="X";
						}
					    else if(matrix[0][1]=='O')
						{
							 textBox6->Text="O";
						}
						else
						{
							 num1=matrix[0][1]-'0';
							textBox6->Text=System::Convert::ToString(num1);
						}
						if(matrix[0][2]=='X')
						{
							textBox7->Text="X";
						}
						else if(matrix[0][2]=='O')
						{
							 textBox7->Text="O";
						}
						else
						{
							 num1=matrix[0][2]-'0';
							textBox7->Text=System::Convert::ToString(num1);
						}

						
						if(matrix[1][0]=='X')
						{
							textBox8->Text="X";
						}
						else if( matrix[1][0]=='O')
						{
							textBox8->Text="O";
						}
						else
						{
							 num1=matrix[1][0]-'0';
							textBox8->Text=System::Convert::ToString(num1);
						}

						if(matrix[1][1]=='X')
						{
							textBox9->Text="X";
						}
					    else if(matrix[1][1]=='O')
						{
							 textBox9->Text="O";
						}
						else
						{
							 num1=matrix[1][1]-'0';
							textBox9->Text=System::Convert::ToString(num1);
						}
						if(matrix[1][2]=='X')
						{
							textBox10->Text="X";
						}
						else if(matrix[1][2]=='O')
						{
							 textBox10->Text="O";
						}
						else
						{
							 num1=matrix[1][2]-'0';
							textBox10->Text=System::Convert::ToString(num1);
						}

						if(matrix[2][0]=='X')
						{
							textBox11->Text="X";
						}
						else if( matrix[2][0]=='O')
						{
							textBox11->Text="O";
						}
						else
						{
							 num1=matrix[2][0]-'0';
							textBox11->Text=System::Convert::ToString(num1);
						}

						if(matrix[2][1]=='X')
						{
							textBox12->Text="X";
						}
					    else if(matrix[2][1]=='O')
						{
							 textBox12->Text="O";
						}
						else
						{
							 num1=matrix[2][1]-'0';
							textBox12->Text=System::Convert::ToString(num1);
						}
						if(matrix[2][2]=='X')
						{
							textBox13->Text="X";
						}
						else if(matrix[2][2]=='O')
						{
							 textBox13->Text="O";
						}
						else
						{
							 num1=matrix[2][2]-'0';
							textBox13->Text=System::Convert::ToString(num1);
						}

						textBox5->Refresh();
						textBox6->Refresh();
						textBox7->Refresh();
						textBox8->Refresh();
						textBox9->Refresh();
						textBox10->Refresh();
						textBox11->Refresh();
						textBox12->Refresh();
						textBox13->Refresh();
						
						if(CheckResult()=='T')
						{
							textBox14->Text="Game Tied";
							textBox14->Refresh();
							break;
						}
						if(CheckResult()=='X')
						{
							textBox14->Text="Player X Won";
							textBox14->Refresh();
							break;
						}
						if(CheckResult()=='O')
						{
							textBox14->Text="Player O Won";
							textBox14->Refresh();
							break;
						}
						fclose(ip);
						Player=1;
						Sleep(3000);
						
					}
	              
					
				 }
			 }
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			
			 }
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 this->Refresh();
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 timer1->Start();
		 }
private: System::Void label7_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}


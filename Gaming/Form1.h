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

	private: System::Windows::Forms::TextBox^  textBox14;
	public: 
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  MainTrain;
	private: System::Windows::Forms::Button^  TALL;
	private: System::Windows::Forms::Label^  labelOr;

	private: System::Windows::Forms::Button^  TInd;
	private: System::Windows::Forms::Button^  Train0;
	private: System::Windows::Forms::Button^  Train1;
	private: System::Windows::Forms::Button^  Train2;
	private: System::Windows::Forms::Button^  Train3;
	private: System::Windows::Forms::Button^  Train4;
	private: System::Windows::Forms::Button^  Train5;
	private: System::Windows::Forms::Button^  Train6;
	private: System::Windows::Forms::Button^  Train7;
	private: System::Windows::Forms::Button^  Train8;
	private: System::Windows::Forms::Button^  Train9;
	private: System::Windows::Forms::Button^  TrainPse;
	private: System::Windows::Forms::Button^  TrainEnd;
	private: System::Windows::Forms::Label^  labelTrain0;
	private: System::Windows::Forms::Label^  labelTrain1;
	private: System::Windows::Forms::Label^  labelTrain2;
	private: System::Windows::Forms::Label^  labelTrain3;
	private: System::Windows::Forms::Label^  labelTrain4;
	private: System::Windows::Forms::Label^  labelTrain5;
	private: System::Windows::Forms::Label^  labelTrain6;
	private: System::Windows::Forms::Label^  labelTrain7;
	private: System::Windows::Forms::Label^  labelTrain8;
	private: System::Windows::Forms::Label^  labelTrain9;
	private: System::Windows::Forms::Label^  labelTrainPse;
	private: System::Windows::Forms::Label^  labelTrainEnd;
	private: System::Windows::Forms::Label^  labelAll;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button2;






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
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->MainTrain = (gcnew System::Windows::Forms::Button());
			this->TALL = (gcnew System::Windows::Forms::Button());
			this->labelOr = (gcnew System::Windows::Forms::Label());
			this->TInd = (gcnew System::Windows::Forms::Button());
			this->Train0 = (gcnew System::Windows::Forms::Button());
			this->Train1 = (gcnew System::Windows::Forms::Button());
			this->Train2 = (gcnew System::Windows::Forms::Button());
			this->Train3 = (gcnew System::Windows::Forms::Button());
			this->Train4 = (gcnew System::Windows::Forms::Button());
			this->Train5 = (gcnew System::Windows::Forms::Button());
			this->Train6 = (gcnew System::Windows::Forms::Button());
			this->Train7 = (gcnew System::Windows::Forms::Button());
			this->Train8 = (gcnew System::Windows::Forms::Button());
			this->Train9 = (gcnew System::Windows::Forms::Button());
			this->TrainPse = (gcnew System::Windows::Forms::Button());
			this->TrainEnd = (gcnew System::Windows::Forms::Button());
			this->labelTrain0 = (gcnew System::Windows::Forms::Label());
			this->labelTrain1 = (gcnew System::Windows::Forms::Label());
			this->labelTrain2 = (gcnew System::Windows::Forms::Label());
			this->labelTrain3 = (gcnew System::Windows::Forms::Label());
			this->labelTrain4 = (gcnew System::Windows::Forms::Label());
			this->labelTrain5 = (gcnew System::Windows::Forms::Label());
			this->labelTrain6 = (gcnew System::Windows::Forms::Label());
			this->labelTrain7 = (gcnew System::Windows::Forms::Label());
			this->labelTrain8 = (gcnew System::Windows::Forms::Label());
			this->labelTrain9 = (gcnew System::Windows::Forms::Label());
			this->labelTrainPse = (gcnew System::Windows::Forms::Label());
			this->labelTrainEnd = (gcnew System::Windows::Forms::Label());
			this->labelAll = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(206, 63);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 33);
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
			this->label3->Location = System::Drawing::Point(326, 7);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(115, 37);
			this->label3->TabIndex = 5;
			this->label3->Text = L"MENU";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(296, 168);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Word recognized";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(401, 168);
			this->textBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(92, 20);
			this->textBox3->TabIndex = 7;
			this->textBox3->Text = L"word";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(303, 195);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(69, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Conformation";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(401, 195);
			this->textBox4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(92, 20);
			this->textBox4->TabIndex = 9;
			this->textBox4->Text = L"y/n";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::Black;
			this->textBox5->ForeColor = System::Drawing::Color::White;
			this->textBox5->Location = System::Drawing::Point(10, 22);
			this->textBox5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(25, 20);
			this->textBox5->TabIndex = 12;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Form1::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::Black;
			this->textBox6->ForeColor = System::Drawing::Color::White;
			this->textBox6->Location = System::Drawing::Point(38, 22);
			this->textBox6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(26, 20);
			this->textBox6->TabIndex = 13;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Form1::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::Black;
			this->textBox7->ForeColor = System::Drawing::Color::White;
			this->textBox7->Location = System::Drawing::Point(65, 22);
			this->textBox7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(24, 20);
			this->textBox7->TabIndex = 14;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &Form1::textBox7_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::Black;
			this->textBox8->ForeColor = System::Drawing::Color::White;
			this->textBox8->Location = System::Drawing::Point(10, 45);
			this->textBox8->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(25, 20);
			this->textBox8->TabIndex = 15;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &Form1::textBox8_TextChanged);
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::Black;
			this->textBox9->ForeColor = System::Drawing::Color::White;
			this->textBox9->Location = System::Drawing::Point(38, 45);
			this->textBox9->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(24, 20);
			this->textBox9->TabIndex = 16;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &Form1::textBox9_TextChanged);
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::Black;
			this->textBox10->ForeColor = System::Drawing::Color::White;
			this->textBox10->Location = System::Drawing::Point(65, 45);
			this->textBox10->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(24, 20);
			this->textBox10->TabIndex = 17;
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::Black;
			this->textBox11->ForeColor = System::Drawing::Color::White;
			this->textBox11->Location = System::Drawing::Point(10, 67);
			this->textBox11->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(25, 20);
			this->textBox11->TabIndex = 18;
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::SystemColors::WindowText;
			this->textBox12->ForeColor = System::Drawing::Color::White;
			this->textBox12->Location = System::Drawing::Point(37, 67);
			this->textBox12->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(25, 20);
			this->textBox12->TabIndex = 19;
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::Color::Black;
			this->textBox13->ForeColor = System::Drawing::Color::White;
			this->textBox13->Location = System::Drawing::Point(65, 67);
			this->textBox13->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(24, 20);
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
			this->groupBox3->Location = System::Drawing::Point(715, 112);
			this->groupBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox3->Size = System::Drawing::Size(100, 101);
			this->groupBox3->TabIndex = 21;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Game Matrix";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 168);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Word recognized";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox1->Location = System::Drawing::Point(133, 168);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(92, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"word";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(37, 195);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Conformation";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(133, 195);
			this->textBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(92, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"y/n";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(88, 135);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 13);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Player X";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(363, 135);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(47, 13);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Player O";
			this->label7->Click += gcnew System::EventHandler(this, &Form1::label7_Click_1);
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(690, 71);
			this->textBox14->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(167, 20);
			this->textBox14->TabIndex = 24;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(627, 71);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(37, 13);
			this->label8->TabIndex = 25;
			this->label8->Text = L"Result";
			// 
			// MainTrain
			// 
			this->MainTrain->Location = System::Drawing::Point(332, 63);
			this->MainTrain->Name = L"MainTrain";
			this->MainTrain->Size = System::Drawing::Size(91, 33);
			this->MainTrain->TabIndex = 26;
			this->MainTrain->Text = L"Training";
			this->MainTrain->UseVisualStyleBackColor = true;
			this->MainTrain->Click += gcnew System::EventHandler(this, &Form1::MainTrain_Click);
			// 
			// TALL
			// 
			this->TALL->Location = System::Drawing::Point(74, 581);
			this->TALL->Name = L"TALL";
			this->TALL->Size = System::Drawing::Size(139, 41);
			this->TALL->TabIndex = 27;
			this->TALL->Text = L"Train ALL";
			this->TALL->UseVisualStyleBackColor = true;
			this->TALL->Visible = false;
			this->TALL->Click += gcnew System::EventHandler(this, &Form1::TALL_Click);
			// 
			// labelOr
			// 
			this->labelOr->AutoSize = true;
			this->labelOr->Location = System::Drawing::Point(130, 509);
			this->labelOr->Name = L"labelOr";
			this->labelOr->Size = System::Drawing::Size(23, 13);
			this->labelOr->TabIndex = 28;
			this->labelOr->Text = L"OR";
			this->labelOr->Visible = false;
			// 
			// TInd
			// 
			this->TInd->Location = System::Drawing::Point(75, 390);
			this->TInd->Name = L"TInd";
			this->TInd->Size = System::Drawing::Size(138, 46);
			this->TInd->TabIndex = 29;
			this->TInd->Text = L"Train Individual";
			this->TInd->UseVisualStyleBackColor = true;
			this->TInd->Visible = false;
			this->TInd->Click += gcnew System::EventHandler(this, &Form1::TInd_Click);
			// 
			// Train0
			// 
			this->Train0->Location = System::Drawing::Point(284, 402);
			this->Train0->Name = L"Train0";
			this->Train0->Size = System::Drawing::Size(72, 33);
			this->Train0->TabIndex = 30;
			this->Train0->Text = L"Train 0";
			this->Train0->UseVisualStyleBackColor = true;
			this->Train0->Visible = false;
			this->Train0->Click += gcnew System::EventHandler(this, &Form1::Train0_Click);
			// 
			// Train1
			// 
			this->Train1->Location = System::Drawing::Point(485, 402);
			this->Train1->Name = L"Train1";
			this->Train1->Size = System::Drawing::Size(75, 33);
			this->Train1->TabIndex = 31;
			this->Train1->Text = L"Train 1";
			this->Train1->UseVisualStyleBackColor = true;
			this->Train1->Visible = false;
			this->Train1->Click += gcnew System::EventHandler(this, &Form1::Train1_Click);
			// 
			// Train2
			// 
			this->Train2->Location = System::Drawing::Point(690, 402);
			this->Train2->Name = L"Train2";
			this->Train2->Size = System::Drawing::Size(75, 33);
			this->Train2->TabIndex = 32;
			this->Train2->Text = L"Train 2";
			this->Train2->UseVisualStyleBackColor = true;
			this->Train2->Visible = false;
			this->Train2->Click += gcnew System::EventHandler(this, &Form1::Train2_Click);
			// 
			// Train3
			// 
			this->Train3->Location = System::Drawing::Point(921, 402);
			this->Train3->Name = L"Train3";
			this->Train3->Size = System::Drawing::Size(75, 33);
			this->Train3->TabIndex = 33;
			this->Train3->Text = L"Train 3";
			this->Train3->UseVisualStyleBackColor = true;
			this->Train3->Visible = false;
			this->Train3->Click += gcnew System::EventHandler(this, &Form1::Train3_Click);
			// 
			// Train4
			// 
			this->Train4->Location = System::Drawing::Point(284, 492);
			this->Train4->Name = L"Train4";
			this->Train4->Size = System::Drawing::Size(72, 31);
			this->Train4->TabIndex = 34;
			this->Train4->Text = L"Train 4";
			this->Train4->UseVisualStyleBackColor = true;
			this->Train4->Visible = false;
			this->Train4->Click += gcnew System::EventHandler(this, &Form1::Train4_Click);
			// 
			// Train5
			// 
			this->Train5->Location = System::Drawing::Point(485, 492);
			this->Train5->Name = L"Train5";
			this->Train5->Size = System::Drawing::Size(75, 31);
			this->Train5->TabIndex = 35;
			this->Train5->Text = L"Train 5";
			this->Train5->UseVisualStyleBackColor = true;
			this->Train5->Visible = false;
			this->Train5->Click += gcnew System::EventHandler(this, &Form1::Train5_Click);
			// 
			// Train6
			// 
			this->Train6->Location = System::Drawing::Point(690, 492);
			this->Train6->Name = L"Train6";
			this->Train6->Size = System::Drawing::Size(75, 31);
			this->Train6->TabIndex = 36;
			this->Train6->Text = L"Train 6";
			this->Train6->UseVisualStyleBackColor = true;
			this->Train6->Visible = false;
			this->Train6->Click += gcnew System::EventHandler(this, &Form1::Train6_Click);
			// 
			// Train7
			// 
			this->Train7->Location = System::Drawing::Point(921, 493);
			this->Train7->Name = L"Train7";
			this->Train7->Size = System::Drawing::Size(75, 31);
			this->Train7->TabIndex = 37;
			this->Train7->Text = L"Train 7";
			this->Train7->UseVisualStyleBackColor = true;
			this->Train7->Visible = false;
			this->Train7->Click += gcnew System::EventHandler(this, &Form1::Train7_Click);
			// 
			// Train8
			// 
			this->Train8->Location = System::Drawing::Point(284, 581);
			this->Train8->Name = L"Train8";
			this->Train8->Size = System::Drawing::Size(72, 32);
			this->Train8->TabIndex = 38;
			this->Train8->Text = L"Train 8";
			this->Train8->UseVisualStyleBackColor = true;
			this->Train8->Visible = false;
			this->Train8->Click += gcnew System::EventHandler(this, &Form1::Train8_Click);
			// 
			// Train9
			// 
			this->Train9->Location = System::Drawing::Point(485, 581);
			this->Train9->Name = L"Train9";
			this->Train9->Size = System::Drawing::Size(75, 32);
			this->Train9->TabIndex = 39;
			this->Train9->Text = L"Train 9";
			this->Train9->UseVisualStyleBackColor = true;
			this->Train9->Visible = false;
			this->Train9->Click += gcnew System::EventHandler(this, &Form1::Train9_Click);
			// 
			// TrainPse
			// 
			this->TrainPse->Location = System::Drawing::Point(690, 581);
			this->TrainPse->Name = L"TrainPse";
			this->TrainPse->Size = System::Drawing::Size(75, 34);
			this->TrainPse->TabIndex = 40;
			this->TrainPse->Text = L"Train Pause";
			this->TrainPse->UseVisualStyleBackColor = true;
			this->TrainPse->Visible = false;
			this->TrainPse->Click += gcnew System::EventHandler(this, &Form1::TrainPse_Click);
			// 
			// TrainEnd
			// 
			this->TrainEnd->Location = System::Drawing::Point(921, 578);
			this->TrainEnd->Name = L"TrainEnd";
			this->TrainEnd->Size = System::Drawing::Size(75, 35);
			this->TrainEnd->TabIndex = 41;
			this->TrainEnd->Text = L"Train End";
			this->TrainEnd->UseVisualStyleBackColor = true;
			this->TrainEnd->Visible = false;
			this->TrainEnd->Click += gcnew System::EventHandler(this, &Form1::TrainEnd_Click);
			// 
			// labelTrain0
			// 
			this->labelTrain0->AutoSize = true;
			this->labelTrain0->Location = System::Drawing::Point(270, 438);
			this->labelTrain0->Name = L"labelTrain0";
			this->labelTrain0->Size = System::Drawing::Size(0, 13);
			this->labelTrain0->TabIndex = 42;
			// 
			// labelTrain1
			// 
			this->labelTrain1->AutoSize = true;
			this->labelTrain1->Location = System::Drawing::Point(482, 438);
			this->labelTrain1->Name = L"labelTrain1";
			this->labelTrain1->Size = System::Drawing::Size(0, 13);
			this->labelTrain1->TabIndex = 43;
			// 
			// labelTrain2
			// 
			this->labelTrain2->AutoSize = true;
			this->labelTrain2->Location = System::Drawing::Point(676, 438);
			this->labelTrain2->Name = L"labelTrain2";
			this->labelTrain2->Size = System::Drawing::Size(0, 13);
			this->labelTrain2->TabIndex = 44;
			// 
			// labelTrain3
			// 
			this->labelTrain3->AutoSize = true;
			this->labelTrain3->Location = System::Drawing::Point(918, 438);
			this->labelTrain3->Name = L"labelTrain3";
			this->labelTrain3->Size = System::Drawing::Size(0, 13);
			this->labelTrain3->TabIndex = 45;
			// 
			// labelTrain4
			// 
			this->labelTrain4->AutoSize = true;
			this->labelTrain4->Location = System::Drawing::Point(270, 527);
			this->labelTrain4->Name = L"labelTrain4";
			this->labelTrain4->Size = System::Drawing::Size(0, 13);
			this->labelTrain4->TabIndex = 46;
			// 
			// labelTrain5
			// 
			this->labelTrain5->AutoSize = true;
			this->labelTrain5->Location = System::Drawing::Point(482, 527);
			this->labelTrain5->Name = L"labelTrain5";
			this->labelTrain5->Size = System::Drawing::Size(0, 13);
			this->labelTrain5->TabIndex = 47;
			// 
			// labelTrain6
			// 
			this->labelTrain6->AutoSize = true;
			this->labelTrain6->Location = System::Drawing::Point(676, 525);
			this->labelTrain6->Name = L"labelTrain6";
			this->labelTrain6->Size = System::Drawing::Size(0, 13);
			this->labelTrain6->TabIndex = 48;
			// 
			// labelTrain7
			// 
			this->labelTrain7->AutoSize = true;
			this->labelTrain7->Location = System::Drawing::Point(918, 527);
			this->labelTrain7->Name = L"labelTrain7";
			this->labelTrain7->Size = System::Drawing::Size(0, 13);
			this->labelTrain7->TabIndex = 49;
			// 
			// labelTrain8
			// 
			this->labelTrain8->AutoSize = true;
			this->labelTrain8->Location = System::Drawing::Point(270, 617);
			this->labelTrain8->Name = L"labelTrain8";
			this->labelTrain8->Size = System::Drawing::Size(0, 13);
			this->labelTrain8->TabIndex = 50;
			// 
			// labelTrain9
			// 
			this->labelTrain9->AutoSize = true;
			this->labelTrain9->Location = System::Drawing::Point(482, 617);
			this->labelTrain9->Name = L"labelTrain9";
			this->labelTrain9->Size = System::Drawing::Size(0, 13);
			this->labelTrain9->TabIndex = 51;
			// 
			// labelTrainPse
			// 
			this->labelTrainPse->AutoSize = true;
			this->labelTrainPse->Location = System::Drawing::Point(676, 617);
			this->labelTrainPse->Name = L"labelTrainPse";
			this->labelTrainPse->Size = System::Drawing::Size(0, 13);
			this->labelTrainPse->TabIndex = 52;
			// 
			// labelTrainEnd
			// 
			this->labelTrainEnd->AutoSize = true;
			this->labelTrainEnd->Location = System::Drawing::Point(918, 617);
			this->labelTrainEnd->Name = L"labelTrainEnd";
			this->labelTrainEnd->Size = System::Drawing::Size(0, 13);
			this->labelTrainEnd->TabIndex = 53;
			// 
			// labelAll
			// 
			this->labelAll->AutoSize = true;
			this->labelAll->Location = System::Drawing::Point(203, 675);
			this->labelAll->Name = L"labelAll";
			this->labelAll->Size = System::Drawing::Size(0, 13);
			this->labelAll->TabIndex = 54;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(688, 241);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(167, 20);
			this->textBox15->TabIndex = 55;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(627, 241);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(50, 13);
			this->label9->TabIndex = 56;
			this->label9->Text = L"Message";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(456, 65);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 29);
			this->button2->TabIndex = 57;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1028, 609);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->labelAll);
			this->Controls->Add(this->labelTrainEnd);
			this->Controls->Add(this->labelTrainPse);
			this->Controls->Add(this->labelTrain9);
			this->Controls->Add(this->labelTrain8);
			this->Controls->Add(this->labelTrain7);
			this->Controls->Add(this->labelTrain6);
			this->Controls->Add(this->labelTrain5);
			this->Controls->Add(this->labelTrain4);
			this->Controls->Add(this->labelTrain3);
			this->Controls->Add(this->labelTrain2);
			this->Controls->Add(this->labelTrain1);
			this->Controls->Add(this->labelTrain0);
			this->Controls->Add(this->TrainEnd);
			this->Controls->Add(this->TrainPse);
			this->Controls->Add(this->Train9);
			this->Controls->Add(this->Train8);
			this->Controls->Add(this->Train7);
			this->Controls->Add(this->Train6);
			this->Controls->Add(this->Train5);
			this->Controls->Add(this->Train4);
			this->Controls->Add(this->Train3);
			this->Controls->Add(this->Train2);
			this->Controls->Add(this->Train1);
			this->Controls->Add(this->Train0);
			this->Controls->Add(this->TInd);
			this->Controls->Add(this->labelOr);
			this->Controls->Add(this->TALL);
			this->Controls->Add(this->MainTrain);
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
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Form1";
			this->Text = L"Form1";
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
					textBox15->Text="";
					textBox15->Refresh();
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
						else if(recognized_digit==11)
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
							if(flag==1 && recognized_digit==11)
							{
								
								exit(0);
				
							}

							if(CheckOccupied(recognized_digit)==0)
							    Yes(recognized_digit,c);
							else
							{
								textBox15->Text="Position already occupied !";
								textBox15->Refresh();
								Sleep(3000);
								continue;
							}


							
								
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
								else if(recognized_digit==11)
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
									if(flag==1 && recognized_digit==11)
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

							
							if(CheckOccupied(recognized_digit)==0)
							    Yes(recognized_digit,c);
							else
							{
								textBox15->Text="Position already occupied !";
								textBox15->Refresh();
								Sleep(3000);
								continue;
							}



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
						
						/*if(CheckResult()==1 || CheckResult()==-1)
						{
							textBox14->Text="Game Over";
							textBox14->Refresh();
							break;
						}*/
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
						else if(recognized_digit==11)
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

							if(CheckOccupied(recognized_digit)==0)
							    Yes(recognized_digit,c);
							else
							{
								textBox15->Text="Position already occupied !";
								textBox15->Refresh();
								Sleep(3000);
								continue;
							}


								
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
								else if(recognized_digit==11)
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
									if(flag==1 && recognized_digit==11)
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
							
							if(CheckOccupied(recognized_digit)==0)
							    Yes(recognized_digit,c);
							else
							{
								textBox15->Text="Position already occupied !";
								textBox15->Refresh();
								Sleep(3000);
								continue;
							}



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

private: System::Void label7_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void MainTrain_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->TInd->Visible = true;
			 this->labelOr->Visible = true;
			 this->TALL->Visible = true;
		 }
private: System::Void TALL_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->labelAll->Text="Training of ALL Digits in Progress....";
			 this->labelAll->Refresh();

			 for(int digit=0;digit<=11;digit++)
			 {
				 Training(digit);
			 }

			 this->labelAll->Text="Training of ALL Digits done Successfully....";
		 }
private: System::Void TInd_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->Train0->Visible = true;
			 this->Train1->Visible = true;
			 this->Train2->Visible = true;
			 this->Train3->Visible = true;
			 this->Train4->Visible = true;
			 this->Train5->Visible = true;
			 this->Train6->Visible = true;
			 this->Train7->Visible = true;
			 this->Train8->Visible = true;
			 this->Train9->Visible = true;

			 this->TrainPse->Visible=true;
			 this->TrainEnd->Visible=true;
		 }
private: System::Void Train0_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->labelTrain0->Text="Training of Digit 0 in Progress....";
			 this->labelTrain0->Refresh();
			 Training(0);
			 this->labelTrain0->Text="Training of Digit 0 done Successfully....";
		 }
private: System::Void Train1_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->labelTrain1->Text="Training of Digit 1 in Progress....";
			 this->labelTrain1->Refresh();
			 Training(1);
			 this->labelTrain1->Text="Training of Digit 1 done Successfully....";
		 }
private: System::Void Train2_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->labelTrain2->Text="Training of Digit 2 in Progress....";
			 this->labelTrain2->Refresh();
			 Training(2);
			 this->labelTrain2->Text="Training of Digit 2 done Successfully....";
		 }
private: System::Void Train3_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->labelTrain3->Text="Training of Digit 3 in Progress....";
			 this->labelTrain3->Refresh();
			 Training(3);
			 this->labelTrain3->Text="Training of Digit 3 done Successfully....";
		 }
private: System::Void Train4_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->labelTrain4->Text="Training of Digit 4 in Progress....";
			 this->labelTrain4->Refresh();
			 Training(4);
			 this->labelTrain4->Text="Training of Digit 4 done Successfully....";
		 }
private: System::Void Train5_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->labelTrain5->Text="Training of Digit 5 in Progress....";
			 this->labelTrain5->Refresh();
			 Training(5);
			 this->labelTrain5->Text="Training of Digit 5 done Successfully....";
		 }
private: System::Void Train6_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->labelTrain6->Text="Training of Digit 6 in Progress....";
			 this->labelTrain6->Refresh();
			 Training(6);
			 this->labelTrain6->Text="Training of Digit 6 done Successfully....";
		 }
private: System::Void Train7_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->labelTrain7->Text="Training of Digit 7 in Progress....";
			 this->labelTrain7->Refresh();
			 Training(7);
			 this->labelTrain7->Text="Training of Digit 7 done Successfully....";
		 }
private: System::Void Train8_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->labelTrain8->Text="Training of Digit 8 in Progress....";
			 this->labelTrain8->Refresh();
			 Training(8);
			 this->labelTrain8->Text="Training of Digit 8 done Successfully....";
		 }
private: System::Void Train9_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->labelTrain9->Text="Training of Digit 9 in Progress....";
			 this->labelTrain9->Refresh();
			 Training(9);
			 this->labelTrain9->Text="Training of Digit 9 done Successfully....";
		 }
private: System::Void TrainPse_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->labelTrainPse->Text="Training of word Pause in Progress....";
			 this->labelTrainPse->Refresh();
			 Training(10);
			 this->labelTrainPse->Text="Training of word Pause done Successfully....";
		 }
private: System::Void TrainEnd_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->labelTrainEnd->Text="Training of word End in Progress....";
			 this->labelTrainEnd->Refresh();
			 Training(11);
			 this->labelTrainEnd->Text="Training of word End done Successfully....";
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 exit(0);
		 }
};
}


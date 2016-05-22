#pragma once
#using<system.dll>

namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			
			Int16 dobra = 0;
			bool var = false;
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

	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: StreamReader^ din;
	private: Int16 dobra;
	private: String^ odpowiedz;
	private: bool var;
	private: System::Windows::Forms::Button^  NowaGraButton;
	private: System::Windows::Forms::Label^  label1;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->NowaGraButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->radioButton1->ForeColor = System::Drawing::Color::White;
			this->radioButton1->Location = System::Drawing::Point(34, 19);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(14, 13);
			this->radioButton1->TabIndex = 4;
			this->radioButton1->TabStop = true;
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->radioButton3->ForeColor = System::Drawing::Color::White;
			this->radioButton3->Location = System::Drawing::Point(155, 19);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(14, 13);
			this->radioButton3->TabIndex = 6;
			this->radioButton3->TabStop = true;
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->radioButton4->ForeColor = System::Drawing::Color::White;
			this->radioButton4->Location = System::Drawing::Point(155, 77);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(14, 13);
			this->radioButton4->TabIndex = 7;
			this->radioButton4->TabStop = true;
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::RoyalBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(238, 323);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(84, 62);
			this->button1->TabIndex = 12;
			this->button1->Text = L"DALEJ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkRed;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(30, 323);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(85, 62);
			this->button2->TabIndex = 13;
			this->button2->Text = L"KONIEC";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(30, 100);
			this->label5->MaximumSize = System::Drawing::Size(300, 100);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 20);
			this->label5->TabIndex = 14;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->radioButton2->ForeColor = System::Drawing::Color::White;
			this->radioButton2->Location = System::Drawing::Point(34, 77);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(14, 13);
			this->radioButton2->TabIndex = 5;
			this->radioButton2->TabStop = true;
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Navy;
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Location = System::Drawing::Point(30, 183);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(292, 113);
			this->groupBox2->TabIndex = 16;
			this->groupBox2->TabStop = false;
			// 
			// NowaGraButton
			// 
			this->NowaGraButton->BackColor = System::Drawing::Color::DarkGreen;
			this->NowaGraButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->NowaGraButton->ForeColor = System::Drawing::Color::White;
			this->NowaGraButton->Location = System::Drawing::Point(134, 323);
			this->NowaGraButton->Name = L"NowaGraButton";
			this->NowaGraButton->Size = System::Drawing::Size(85, 62);
			this->NowaGraButton->TabIndex = 17;
			this->NowaGraButton->Text = L"NOWA GRA";
			this->NowaGraButton->UseVisualStyleBackColor = false;
			this->NowaGraButton->Click += gcnew System::EventHandler(this, &Form1::NowaGraButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(27, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 16);
			this->label1->TabIndex = 18;
			this->label1->Text = L"WYNIK: 0";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Navy;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(356, 414);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->NowaGraButton);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"QuizMaster";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) 
		 {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Application::Exit();
		 }
private: System::Void NowaGraButton_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			var = true;
			label1->Text = "WYNIK: 0";
			din = File::OpenText("pytania.txt");
			label5->Text =(din->ReadLine());
			radioButton1->Text = (din->ReadLine());
			radioButton2->Text = (din->ReadLine());
			radioButton3->Text = (din->ReadLine());
			radioButton4->Text = (din->ReadLine());
			odpowiedz = (din->ReadLine());
			dobra = 0;

		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {	
			 String^ znak;
			 if(var==false)
			 {
				 MessageBox::Show("Nacisnij NOWA GRA");
			 }
			 else if(var==true)
			 {				
				if(radioButton1->Checked) 
				{
					znak = "A";
				}
				else if(radioButton2->Checked) 
				{
					znak = "B";
				}
				else if(radioButton3->Checked) 
				{
					znak = "C";
				}
				else if(radioButton4->Checked) 
				{
					znak = "D";
				}
				
				if (znak == odpowiedz)
					{
						dobra++;
						label1->Text = "WYNIK: " + dobra.ToString();
						MessageBox::Show("Dobrze!");				
					}
				else if(znak != odpowiedz) 
					{
						MessageBox::Show("le! Dobra odpowiedŸ: "+odpowiedz);				
					}
				if(din->EndOfStream==false)
					{
						label5->Text =(din->ReadLine());
						radioButton1->Text = (din->ReadLine());
						radioButton2->Text = (din->ReadLine());
						radioButton3->Text = (din->ReadLine());
						radioButton4->Text = (din->ReadLine());
						odpowiedz = (din->ReadLine());
	
					}
				else if(din->EndOfStream==true)
					{
						MessageBox::Show("Koniec. Wynik: "+dobra+" na 10");
						var = false;
					}		 		
					radioButton1->Checked = false;
					radioButton2->Checked = false;
					radioButton3->Checked = false;
					radioButton4->Checked = false;
			}
		 }
};
}
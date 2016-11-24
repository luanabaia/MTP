#pragma once

namespace projGUI2 {

#define MAXCHARDISP 16

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
	private: System::Windows::Forms::Label^  lbldisplay;
	protected: 

	private: System::Windows::Forms::Button^  btn7;
	protected: 

	private: System::Windows::Forms::Button^  btnclear;
	private: System::Windows::Forms::Button^  btnsoma;


	private: System::Windows::Forms::Button^  btn9;

	private: System::Windows::Forms::Button^  btn8;
	private: System::Windows::Forms::Button^  btn5;
	private: System::Windows::Forms::Button^  btn6;
	private: System::Windows::Forms::Button^  btnsub;




	private: System::Windows::Forms::Button^  btnfat;
	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btn2;
	private: System::Windows::Forms::Button^  btn3;
	private: System::Windows::Forms::Button^  btnmult;





	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  btn1;
	private: System::Windows::Forms::Button^  btnvirg;
	private: System::Windows::Forms::Button^  btnmm;
	private: System::Windows::Forms::Button^  btndiv;
	private: System::Windows::Forms::Button^  btnraiz;





	private: System::Windows::Forms::Button^  btn0;
	private: System::Windows::Forms::Button^  btnigual;



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
			this->lbldisplay = (gcnew System::Windows::Forms::Label());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btnclear = (gcnew System::Windows::Forms::Button());
			this->btnsoma = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btnsub = (gcnew System::Windows::Forms::Button());
			this->btnfat = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnmult = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btnvirg = (gcnew System::Windows::Forms::Button());
			this->btnmm = (gcnew System::Windows::Forms::Button());
			this->btndiv = (gcnew System::Windows::Forms::Button());
			this->btnraiz = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnigual = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbldisplay
			// 
			this->lbldisplay->BackColor = System::Drawing::Color::White;
			this->lbldisplay->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lbldisplay->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbldisplay->ForeColor = System::Drawing::Color::Magenta;
			this->lbldisplay->Location = System::Drawing::Point(14, 24);
			this->lbldisplay->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->lbldisplay->Name = L"lbldisplay";
			this->lbldisplay->Size = System::Drawing::Size(328, 82);
			this->lbldisplay->TabIndex = 0;
			this->lbldisplay->Text = L"0";
			this->lbldisplay->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::Color::White;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn7->ForeColor = System::Drawing::Color::Magenta;
			this->btn7->Location = System::Drawing::Point(12, 137);
			this->btn7->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(58, 64);
			this->btn7->TabIndex = 1;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = false;
			// 
			// btnclear
			// 
			this->btnclear->BackColor = System::Drawing::Color::White;
			this->btnclear->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnclear->ForeColor = System::Drawing::Color::Magenta;
			this->btnclear->Location = System::Drawing::Point(284, 137);
			this->btnclear->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btnclear->Name = L"btnclear";
			this->btnclear->Size = System::Drawing::Size(58, 64);
			this->btnclear->TabIndex = 2;
			this->btnclear->Text = L"C";
			this->btnclear->UseVisualStyleBackColor = false;
			// 
			// btnsoma
			// 
			this->btnsoma->BackColor = System::Drawing::Color::White;
			this->btnsoma->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnsoma->ForeColor = System::Drawing::Color::Magenta;
			this->btnsoma->Location = System::Drawing::Point(216, 138);
			this->btnsoma->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btnsoma->Name = L"btnsoma";
			this->btnsoma->Size = System::Drawing::Size(58, 64);
			this->btnsoma->TabIndex = 3;
			this->btnsoma->Text = L"+";
			this->btnsoma->UseVisualStyleBackColor = false;
			this->btnsoma->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::Color::White;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn9->ForeColor = System::Drawing::Color::Magenta;
			this->btn9->Location = System::Drawing::Point(148, 138);
			this->btn9->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(58, 64);
			this->btn9->TabIndex = 4;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = false;
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::Color::White;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn8->ForeColor = System::Drawing::Color::Magenta;
			this->btn8->Location = System::Drawing::Point(80, 138);
			this->btn8->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(58, 64);
			this->btn8->TabIndex = 5;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = false;
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::Color::White;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn5->ForeColor = System::Drawing::Color::Magenta;
			this->btn5->Location = System::Drawing::Point(80, 211);
			this->btn5->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(58, 64);
			this->btn5->TabIndex = 10;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = false;
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::Color::White;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn6->ForeColor = System::Drawing::Color::Magenta;
			this->btn6->Location = System::Drawing::Point(148, 211);
			this->btn6->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(58, 64);
			this->btn6->TabIndex = 9;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = false;
			// 
			// btnsub
			// 
			this->btnsub->BackColor = System::Drawing::Color::White;
			this->btnsub->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnsub->ForeColor = System::Drawing::Color::Magenta;
			this->btnsub->Location = System::Drawing::Point(216, 211);
			this->btnsub->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btnsub->Name = L"btnsub";
			this->btnsub->Size = System::Drawing::Size(58, 64);
			this->btnsub->TabIndex = 8;
			this->btnsub->Text = L"-";
			this->btnsub->UseVisualStyleBackColor = false;
			this->btnsub->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// btnfat
			// 
			this->btnfat->BackColor = System::Drawing::Color::White;
			this->btnfat->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnfat->ForeColor = System::Drawing::Color::Magenta;
			this->btnfat->Location = System::Drawing::Point(284, 212);
			this->btnfat->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btnfat->Name = L"btnfat";
			this->btnfat->Size = System::Drawing::Size(58, 64);
			this->btnfat->TabIndex = 7;
			this->btnfat->Text = L"n!";
			this->btnfat->UseVisualStyleBackColor = false;
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::Color::White;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn4->ForeColor = System::Drawing::Color::Magenta;
			this->btn4->Location = System::Drawing::Point(12, 210);
			this->btn4->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(58, 64);
			this->btn4->TabIndex = 6;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = false;
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::Color::White;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn2->ForeColor = System::Drawing::Color::Magenta;
			this->btn2->Location = System::Drawing::Point(80, 284);
			this->btn2->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(58, 64);
			this->btn2->TabIndex = 15;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = false;
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::Color::White;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn3->ForeColor = System::Drawing::Color::Magenta;
			this->btn3->Location = System::Drawing::Point(148, 283);
			this->btn3->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(58, 64);
			this->btn3->TabIndex = 14;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = false;
			// 
			// btnmult
			// 
			this->btnmult->BackColor = System::Drawing::Color::White;
			this->btnmult->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnmult->ForeColor = System::Drawing::Color::Magenta;
			this->btnmult->Location = System::Drawing::Point(216, 284);
			this->btnmult->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btnmult->Name = L"btnmult";
			this->btnmult->Size = System::Drawing::Size(58, 64);
			this->btnmult->TabIndex = 13;
			this->btnmult->Text = L"×";
			this->btnmult->UseVisualStyleBackColor = false;
			this->btnmult->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::White;
			this->button14->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::Magenta;
			this->button14->Location = System::Drawing::Point(284, 283);
			this->button14->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(58, 64);
			this->button14->TabIndex = 12;
			this->button14->Text = L"xʸ";
			this->button14->UseVisualStyleBackColor = false;
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::Color::White;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn1->ForeColor = System::Drawing::Color::Magenta;
			this->btn1->Location = System::Drawing::Point(12, 283);
			this->btn1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(58, 64);
			this->btn1->TabIndex = 11;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = false;
			// 
			// btnvirg
			// 
			this->btnvirg->BackColor = System::Drawing::Color::White;
			this->btnvirg->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnvirg->ForeColor = System::Drawing::Color::Magenta;
			this->btnvirg->Location = System::Drawing::Point(80, 356);
			this->btnvirg->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btnvirg->Name = L"btnvirg";
			this->btnvirg->Size = System::Drawing::Size(58, 64);
			this->btnvirg->TabIndex = 20;
			this->btnvirg->Text = L",";
			this->btnvirg->UseVisualStyleBackColor = false;
			// 
			// btnmm
			// 
			this->btnmm->BackColor = System::Drawing::Color::White;
			this->btnmm->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnmm->ForeColor = System::Drawing::Color::Magenta;
			this->btnmm->Location = System::Drawing::Point(148, 356);
			this->btnmm->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btnmm->Name = L"btnmm";
			this->btnmm->Size = System::Drawing::Size(58, 64);
			this->btnmm->TabIndex = 19;
			this->btnmm->Text = L"±";
			this->btnmm->UseVisualStyleBackColor = false;
			// 
			// btndiv
			// 
			this->btndiv->BackColor = System::Drawing::Color::White;
			this->btndiv->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btndiv->ForeColor = System::Drawing::Color::Magenta;
			this->btndiv->Location = System::Drawing::Point(216, 357);
			this->btndiv->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btndiv->Name = L"btndiv";
			this->btndiv->Size = System::Drawing::Size(58, 64);
			this->btndiv->TabIndex = 18;
			this->btndiv->Text = L"÷";
			this->btndiv->UseVisualStyleBackColor = false;
			this->btndiv->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
			// 
			// btnraiz
			// 
			this->btnraiz->BackColor = System::Drawing::Color::White;
			this->btnraiz->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnraiz->ForeColor = System::Drawing::Color::Magenta;
			this->btnraiz->Location = System::Drawing::Point(284, 355);
			this->btnraiz->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btnraiz->Name = L"btnraiz";
			this->btnraiz->Size = System::Drawing::Size(58, 64);
			this->btnraiz->TabIndex = 17;
			this->btnraiz->Text = L"√¯";
			this->btnraiz->UseVisualStyleBackColor = false;
			// 
			// btn0
			// 
			this->btn0->BackColor = System::Drawing::Color::White;
			this->btn0->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn0->ForeColor = System::Drawing::Color::Magenta;
			this->btn0->Location = System::Drawing::Point(12, 356);
			this->btn0->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(58, 64);
			this->btn0->TabIndex = 16;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = false;
			this->btn0->Click += gcnew System::EventHandler(this, &Form1::btn0_Click);
			// 
			// btnigual
			// 
			this->btnigual->BackColor = System::Drawing::Color::White;
			this->btnigual->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnigual->ForeColor = System::Drawing::Color::Magenta;
			this->btnigual->Location = System::Drawing::Point(80, 429);
			this->btnigual->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btnigual->Name = L"btnigual";
			this->btnigual->Size = System::Drawing::Size(194, 64);
			this->btnigual->TabIndex = 21;
			this->btnigual->Text = L"=";
			this->btnigual->UseVisualStyleBackColor = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Turquoise;
			this->ClientSize = System::Drawing::Size(360, 515);
			this->Controls->Add(this->btnigual);
			this->Controls->Add(this->btnvirg);
			this->Controls->Add(this->btnmm);
			this->Controls->Add(this->btndiv);
			this->Controls->Add(this->btnraiz);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btnmult);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btnsub);
			this->Controls->Add(this->btnfat);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btnsoma);
			this->Controls->Add(this->btnclear);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->lbldisplay);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Fuchsia;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->Name = L"Form1";
			this->Text = L"CalcX";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(lbldisplay->Text == "0")
					 lbldisplay->Text = "1";
				 lbldisplay->Text = lbldisplay->Text + "1";
			 };
}


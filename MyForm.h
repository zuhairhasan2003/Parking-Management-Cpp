#pragma once

#include"setup.h"

namespace signIn {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			this->panel3->Hide();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ signIn;
	private: System::Windows::Forms::Label^ usernameLable;
	private: System::Windows::Forms::Label^ passwordLabel;
	private: System::Windows::Forms::TextBox^ username;
	private: System::Windows::Forms::TextBox^ password;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::CheckBox^ termsAndConditions;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::CheckBox^ viewPassword;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->signIn = (gcnew System::Windows::Forms::Label());
			this->usernameLable = (gcnew System::Windows::Forms::Label());
			this->passwordLabel = (gcnew System::Windows::Forms::Label());
			this->username = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->termsAndConditions = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->viewPassword = (gcnew System::Windows::Forms::CheckBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// signIn
			// 
			this->signIn->AutoSize = true;
			this->signIn->BackColor = System::Drawing::Color::Black;
			this->signIn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signIn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->signIn->Location = System::Drawing::Point(729, 104);
			this->signIn->Name = L"signIn";
			this->signIn->Size = System::Drawing::Size(142, 52);
			this->signIn->TabIndex = 0;
			this->signIn->Text = L"Log In";
			this->signIn->Click += gcnew System::EventHandler(this, &MyForm::signIn_Click);
			// 
			// usernameLable
			// 
			this->usernameLable->AutoSize = true;
			this->usernameLable->BackColor = System::Drawing::Color::Black;
			this->usernameLable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameLable->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->usernameLable->Location = System::Drawing::Point(733, 226);
			this->usernameLable->Name = L"usernameLable";
			this->usernameLable->Size = System::Drawing::Size(102, 25);
			this->usernameLable->TabIndex = 1;
			this->usernameLable->Text = L"Username";
			// 
			// passwordLabel
			// 
			this->passwordLabel->AutoSize = true;
			this->passwordLabel->BackColor = System::Drawing::Color::Black;
			this->passwordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->passwordLabel->Location = System::Drawing::Point(733, 337);
			this->passwordLabel->Name = L"passwordLabel";
			this->passwordLabel->Size = System::Drawing::Size(98, 25);
			this->passwordLabel->TabIndex = 2;
			this->passwordLabel->Text = L"Password";
			// 
			// username
			// 
			this->username->BackColor = System::Drawing::Color::Black;
			this->username->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->username->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->username->Location = System::Drawing::Point(738, 264);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(244, 19);
			this->username->TabIndex = 3;
			this->username->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::username_KeyPress);
			// 
			// password
			// 
			this->password->BackColor = System::Drawing::Color::Black;
			this->password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->password->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->password->Location = System::Drawing::Point(738, 379);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(244, 19);
			this->password->TabIndex = 4;
			this->password->UseSystemPasswordChar = true;
			this->password->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::password_KeyDown);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(738, 280);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(250, 3);
			this->panel1->TabIndex = 5;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(738, 395);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(250, 3);
			this->panel2->TabIndex = 6;
			// 
			// termsAndConditions
			// 
			this->termsAndConditions->AutoSize = true;
			this->termsAndConditions->BackColor = System::Drawing::Color::Transparent;
			this->termsAndConditions->ForeColor = System::Drawing::SystemColors::Control;
			this->termsAndConditions->Location = System::Drawing::Point(750, 441);
			this->termsAndConditions->Name = L"termsAndConditions";
			this->termsAndConditions->Size = System::Drawing::Size(94, 24);
			this->termsAndConditions->TabIndex = 7;
			this->termsAndConditions->Text = L"agree to";
			this->termsAndConditions->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Firebrick;
			this->label1->Location = System::Drawing::Point(809, 440);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(175, 22);
			this->label1->TabIndex = 8;
			this->label1->Text = L"terms and conditions";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Firebrick;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(750, 511);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 41);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Log In";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Firebrick;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Firebrick;
			this->button2->Location = System::Drawing::Point(906, 511);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 41);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// viewPassword
			// 
			this->viewPassword->AutoSize = true;
			this->viewPassword->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->viewPassword->FlatAppearance->BorderSize = 0;
			this->viewPassword->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->viewPassword->Location = System::Drawing::Point(991, 377);
			this->viewPassword->Name = L"viewPassword";
			this->viewPassword->Size = System::Drawing::Size(17, 16);
			this->viewPassword->TabIndex = 11;
			this->viewPassword->UseVisualStyleBackColor = true;
			this->viewPassword->CheckedChanged += gcnew System::EventHandler(this, &MyForm::viewPassword_CheckedChanged);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->Controls->Add(this->button3);
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1064, 674);
			this->panel3->TabIndex = 12;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel3_Paint);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Firebrick;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::Control;
			this->button3->Location = System::Drawing::Point(819, 553);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(136, 41);
			this->button3->TabIndex = 10;
			this->button3->Text = L"OK";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Menu;
			this->textBox1->Location = System::Drawing::Point(708, 159);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(340, 365);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = resources->GetString(L"textBox1.Text");
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(701, 104);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(369, 40);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Terms and Conditions";
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::Gray;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1064, 674);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->viewPassword);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->termsAndConditions);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->password);
			this->Controls->Add(this->username);
			this->Controls->Add(this->passwordLabel);
			this->Controls->Add(this->usernameLable);
			this->Controls->Add(this->signIn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(1064, 674);
			this->MinimumSize = System::Drawing::Size(1064, 674);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sign In";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void signIn_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->termsAndConditions->Checked && this->username->Text == "admin" && this->password->Text == "admin")
		{
			MessageBox::Show("access granted                 ", "Sign In sucessful", MessageBoxButtons::OK, MessageBoxIcon::None);
			setup^ object;
			object = gcnew setup;

			this->Hide();
			object->ShowDialog();


		}
		else
		{
			if (this->password->Text != "admin" || this->username->Text != "admin")
			{
				MessageBox::Show("Invalid username or password", "Unsecessful Login", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else if (!this->termsAndConditions->Checked)
			{
				MessageBox::Show("Please agree to terms and conditions", "", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void viewPassword_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->viewPassword->Checked)
		{
			this->password->UseSystemPasswordChar = false;
		}
		else if (!this->viewPassword->Checked)
		{
			this->password->UseSystemPasswordChar = true;
		}
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel3->Show();
	}
	private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel3->Hide();
	}
	private: System::Void username_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == (int)Keys::Enter)
		{
			this->password->Focus();
		}
	}

	private: System::Void password_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter)
		{
			this->button1->PerformClick();
		}
	}
};
}
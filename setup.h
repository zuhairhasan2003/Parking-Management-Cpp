#pragma once
#include "workplace.h"
#include"Slot.h"

namespace signIn {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for setup
	/// </summary>

	
	public ref class setup : public System::Windows::Forms::Form
	{
	public:
		Slot** slot;
		int total_slots;
		int total_floors;

		setup(void)
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
		~setup()
		{
			for (int i = 0; i < total_slots; i++)
			{
				delete[] slot[i];
			}
			delete[] slot;

			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ usernameLable;
	private: System::Windows::Forms::NumericUpDown^ number_of_floors;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ number_of_slots;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::NumericUpDown^ parking_rate;
	private: System::Windows::Forms::Label^ label3;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(setup::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->usernameLable = (gcnew System::Windows::Forms::Label());
			this->number_of_floors = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->number_of_slots = (gcnew System::Windows::Forms::NumericUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->parking_rate = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->number_of_floors))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->number_of_slots))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->parking_rate))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(706, 91);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 52);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Setup";
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
			this->button2->Location = System::Drawing::Point(741, 573);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 41);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &setup::button2_Click);
			// 
			// usernameLable
			// 
			this->usernameLable->AutoSize = true;
			this->usernameLable->BackColor = System::Drawing::Color::Black;
			this->usernameLable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameLable->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->usernameLable->Location = System::Drawing::Point(710, 200);
			this->usernameLable->Name = L"usernameLable";
			this->usernameLable->Size = System::Drawing::Size(389, 25);
			this->usernameLable->TabIndex = 12;
			this->usernameLable->Text = L"Total number of floors for parking avaliable\?";
			// 
			// number_of_floors
			// 
			this->number_of_floors->BackColor = System::Drawing::Color::Black;
			this->number_of_floors->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->number_of_floors->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->number_of_floors->Location = System::Drawing::Point(715, 237);
			this->number_of_floors->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->number_of_floors->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->number_of_floors->Name = L"number_of_floors";
			this->number_of_floors->Size = System::Drawing::Size(120, 26);
			this->number_of_floors->TabIndex = 13;
			this->number_of_floors->Tag = L"";
			this->number_of_floors->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(710, 289);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(381, 50);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Total number of car parking slots avaliable \r\non each floor\?";
			// 
			// number_of_slots
			// 
			this->number_of_slots->BackColor = System::Drawing::Color::Black;
			this->number_of_slots->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->number_of_slots->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->number_of_slots->Location = System::Drawing::Point(715, 350);
			this->number_of_slots->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 0 });
			this->number_of_slots->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->number_of_slots->Name = L"number_of_slots";
			this->number_of_slots->Size = System::Drawing::Size(120, 26);
			this->number_of_slots->TabIndex = 15;
			this->number_of_slots->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Firebrick;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(905, 573);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 41);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Ok";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &setup::button1_Click);
			// 
			// parking_rate
			// 
			this->parking_rate->BackColor = System::Drawing::Color::Black;
			this->parking_rate->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->parking_rate->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->parking_rate->Location = System::Drawing::Point(715, 441);
			this->parking_rate->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->parking_rate->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->parking_rate->Name = L"parking_rate";
			this->parking_rate->Size = System::Drawing::Size(120, 26);
			this->parking_rate->TabIndex = 18;
			this->parking_rate->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->parking_rate->ValueChanged += gcnew System::EventHandler(this, &setup::parking_rate_ValueChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Black;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(710, 405);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(267, 25);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Per hour rate of parking (Rs)\?\r\n";
			// 
			// setup
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1064, 674);
			this->Controls->Add(this->parking_rate);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->number_of_slots);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->number_of_floors);
			this->Controls->Add(this->usernameLable);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(1064, 674);
			this->MinimumSize = System::Drawing::Size(1064, 674);
			this->Name = L"setup";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"setup";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->number_of_floors))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->number_of_slots))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->parking_rate))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {



		Application::Exit();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		total_floors = Convert::ToInt32(this->number_of_floors->Value);
		total_slots = Convert::ToInt32(this->number_of_slots->Value);
		const int parking_rate = Convert::ToInt32(this->parking_rate->Value);

		slot = new Slot * [total_floors];

		for (int i = 0; i < total_floors; i++)
		{
			slot[i] = new Slot[total_slots];
		}

		for (int i = 0; i < total_floors; i++)
		{
			for (int j = 0; j < total_slots; j++)
			{
				(slot[i] + j)->assign_floor_number(i + 1);
				(slot[i] + j)->assign_slot_number(j + 1);
				(slot[i] + j)->set_parking_price(parking_rate);
			}
		}

		this->Hide();

		workplace^ work = gcnew workplace(slot, total_floors, total_slots);

		work->Show();
	}
private: System::Void parking_rate_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
#pragma once
#include"Slot.h"
#include<string>

namespace signIn {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for workplace
	/// </summary>
	public ref class workplace : public System::Windows::Forms::Form
	{
		float revenue = 0;
	public:
		Slot** map;
		int total_floors;
	private: System::Windows::Forms::Panel^ panel2;
	public:
	private: System::Windows::Forms::TextBox^ number_plate_cheak_out;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ reserve_button;
	private: System::Windows::Forms::Panel^ reservation_panel;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ reservation_number_plate;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::NumericUpDown^ numeric_year;
	private: System::Windows::Forms::NumericUpDown^ numeric_day;
	private: System::Windows::Forms::NumericUpDown^ numeric_minutes;




	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ numeric_hours;

	private: System::Windows::Forms::NumericUpDown^ numeric_month;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ cancel_reservation_number_plate;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ListBox^ reservation_list_box;
	private: System::Windows::Forms::Button^ view_reservation_button;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ revenue_label;


	int total_slots;


	public:

		workplace(Slot** a, int total_floors, int total_slots) : map(a)
		{
			this->total_floors = total_floors;
			this->total_slots = total_slots;


			InitializeComponent();
			this->reservation_panel->Hide();
			this->reservation_list_box->Hide();
			this->button7->Hide();
			this->label7->Hide();
			this->revenue_label->Text = "0 Rs";

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~workplace()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ number_plate;

	private: System::Windows::Forms::Label^ usernameLable;


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(workplace::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->number_plate = (gcnew System::Windows::Forms::TextBox());
			this->usernameLable = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->number_plate_cheak_out = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->reserve_button = (gcnew System::Windows::Forms::Button());
			this->reservation_panel = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->view_reservation_button = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->reservation_list_box = (gcnew System::Windows::Forms::ListBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->cancel_reservation_number_plate = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->numeric_minutes = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numeric_hours = (gcnew System::Windows::Forms::NumericUpDown());
			this->numeric_month = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->numeric_year = (gcnew System::Windows::Forms::NumericUpDown());
			this->numeric_day = (gcnew System::Windows::Forms::NumericUpDown());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->reservation_number_plate = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->revenue_label = (gcnew System::Windows::Forms::Label());
			this->reservation_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_minutes))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_hours))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_month))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_year))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_day))->BeginInit();
			this->SuspendLayout();
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
			this->button2->Location = System::Drawing::Point(741, 549);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 41);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &workplace::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Firebrick;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(741, 139);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 41);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Check In";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &workplace::button1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Firebrick;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::Control;
			this->button3->Location = System::Drawing::Point(741, 289);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(136, 41);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Check Out";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &workplace::button3_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(741, 125);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(250, 3);
			this->panel1->TabIndex = 17;
			// 
			// number_plate
			// 
			this->number_plate->BackColor = System::Drawing::Color::Black;
			this->number_plate->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->number_plate->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->number_plate->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->number_plate->Location = System::Drawing::Point(741, 109);
			this->number_plate->Name = L"number_plate";
			this->number_plate->Size = System::Drawing::Size(244, 19);
			this->number_plate->TabIndex = 16;
			this->number_plate->TextChanged += gcnew System::EventHandler(this, &workplace::number_plate_TextChanged);
			// 
			// usernameLable
			// 
			this->usernameLable->AutoSize = true;
			this->usernameLable->BackColor = System::Drawing::Color::Black;
			this->usernameLable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameLable->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->usernameLable->Location = System::Drawing::Point(736, 71);
			this->usernameLable->Name = L"usernameLable";
			this->usernameLable->Size = System::Drawing::Size(357, 25);
			this->usernameLable->TabIndex = 15;
			this->usernameLable->Text = L"Enter car registration number(ABC-123)";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(741, 275);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(250, 3);
			this->panel2->TabIndex = 20;
			// 
			// number_plate_cheak_out
			// 
			this->number_plate_cheak_out->BackColor = System::Drawing::Color::Black;
			this->number_plate_cheak_out->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->number_plate_cheak_out->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->number_plate_cheak_out->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->number_plate_cheak_out->Location = System::Drawing::Point(741, 259);
			this->number_plate_cheak_out->Name = L"number_plate_cheak_out";
			this->number_plate_cheak_out->Size = System::Drawing::Size(244, 19);
			this->number_plate_cheak_out->TabIndex = 19;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(736, 221);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(357, 25);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Enter car registration number(ABC-123)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(736, 365);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(338, 25);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Click here to cancel/add a reservation";
			// 
			// reserve_button
			// 
			this->reserve_button->BackColor = System::Drawing::Color::Firebrick;
			this->reserve_button->FlatAppearance->BorderSize = 0;
			this->reserve_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->reserve_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reserve_button->ForeColor = System::Drawing::SystemColors::Control;
			this->reserve_button->Location = System::Drawing::Point(741, 394);
			this->reserve_button->Name = L"reserve_button";
			this->reserve_button->Size = System::Drawing::Size(244, 41);
			this->reserve_button->TabIndex = 21;
			this->reserve_button->Text = L"Reservation settings";
			this->reserve_button->UseVisualStyleBackColor = false;
			this->reserve_button->Click += gcnew System::EventHandler(this, &workplace::reserve_button_Click);
			// 
			// reservation_panel
			// 
			this->reservation_panel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"reservation_panel.BackgroundImage")));
			this->reservation_panel->Controls->Add(this->label7);
			this->reservation_panel->Controls->Add(this->button7);
			this->reservation_panel->Controls->Add(this->view_reservation_button);
			this->reservation_panel->Controls->Add(this->panel6);
			this->reservation_panel->Controls->Add(this->reservation_list_box);
			this->reservation_panel->Controls->Add(this->button6);
			this->reservation_panel->Controls->Add(this->panel5);
			this->reservation_panel->Controls->Add(this->cancel_reservation_number_plate);
			this->reservation_panel->Controls->Add(this->label6);
			this->reservation_panel->Controls->Add(this->panel4);
			this->reservation_panel->Controls->Add(this->numeric_minutes);
			this->reservation_panel->Controls->Add(this->label4);
			this->reservation_panel->Controls->Add(this->numeric_hours);
			this->reservation_panel->Controls->Add(this->numeric_month);
			this->reservation_panel->Controls->Add(this->label5);
			this->reservation_panel->Controls->Add(this->numeric_year);
			this->reservation_panel->Controls->Add(this->numeric_day);
			this->reservation_panel->Controls->Add(this->panel3);
			this->reservation_panel->Controls->Add(this->reservation_number_plate);
			this->reservation_panel->Controls->Add(this->label3);
			this->reservation_panel->Controls->Add(this->button4);
			this->reservation_panel->Controls->Add(this->button5);
			this->reservation_panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->reservation_panel->Location = System::Drawing::Point(0, 0);
			this->reservation_panel->Name = L"reservation_panel";
			this->reservation_panel->Size = System::Drawing::Size(1064, 674);
			this->reservation_panel->TabIndex = 23;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Black;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->Location = System::Drawing::Point(234, 160);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(201, 25);
			this->label7->TabIndex = 45;
			this->label7->Text = L"Current Reservations:";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Black;
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(344, 402);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(136, 41);
			this->button7->TabIndex = 44;
			this->button7->Text = L"Ok";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &workplace::button7_Click);
			// 
			// view_reservation_button
			// 
			this->view_reservation_button->BackColor = System::Drawing::Color::Firebrick;
			this->view_reservation_button->FlatAppearance->BorderSize = 0;
			this->view_reservation_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->view_reservation_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->view_reservation_button->ForeColor = System::Drawing::SystemColors::Control;
			this->view_reservation_button->Location = System::Drawing::Point(741, 553);
			this->view_reservation_button->Name = L"view_reservation_button";
			this->view_reservation_button->Size = System::Drawing::Size(285, 41);
			this->view_reservation_button->TabIndex = 43;
			this->view_reservation_button->Text = L"View current reservation";
			this->view_reservation_button->UseVisualStyleBackColor = false;
			this->view_reservation_button->Click += gcnew System::EventHandler(this, &workplace::view_reservation_button_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::White;
			this->panel6->Location = System::Drawing::Point(688, 532);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(487, 3);
			this->panel6->TabIndex = 42;
			// 
			// reservation_list_box
			// 
			this->reservation_list_box->BackColor = System::Drawing::Color::Black;
			this->reservation_list_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->reservation_list_box->ForeColor = System::Drawing::Color::White;
			this->reservation_list_box->FormattingEnabled = true;
			this->reservation_list_box->ItemHeight = 22;
			this->reservation_list_box->Location = System::Drawing::Point(234, 188);
			this->reservation_list_box->Name = L"reservation_list_box";
			this->reservation_list_box->Size = System::Drawing::Size(353, 202);
			this->reservation_list_box->Sorted = true;
			this->reservation_list_box->TabIndex = 41;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Firebrick;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::Control;
			this->button6->Location = System::Drawing::Point(741, 476);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(223, 41);
			this->button6->TabIndex = 40;
			this->button6->Text = L"cancel reservation";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &workplace::button6_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->Location = System::Drawing::Point(741, 456);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(250, 3);
			this->panel5->TabIndex = 39;
			// 
			// cancel_reservation_number_plate
			// 
			this->cancel_reservation_number_plate->BackColor = System::Drawing::Color::Black;
			this->cancel_reservation_number_plate->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->cancel_reservation_number_plate->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->cancel_reservation_number_plate->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->cancel_reservation_number_plate->Location = System::Drawing::Point(741, 440);
			this->cancel_reservation_number_plate->Name = L"cancel_reservation_number_plate";
			this->cancel_reservation_number_plate->Size = System::Drawing::Size(244, 19);
			this->cancel_reservation_number_plate->TabIndex = 38;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Black;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->Location = System::Drawing::Point(736, 402);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(357, 25);
			this->label6->TabIndex = 37;
			this->label6->Text = L"Enter car registration number(ABC-123)";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Location = System::Drawing::Point(688, 376);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(487, 3);
			this->panel4->TabIndex = 36;
			// 
			// numeric_minutes
			// 
			this->numeric_minutes->Location = System::Drawing::Point(842, 270);
			this->numeric_minutes->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 59, 0, 0, 0 });
			this->numeric_minutes->Name = L"numeric_minutes";
			this->numeric_minutes->Size = System::Drawing::Size(81, 26);
			this->numeric_minutes->TabIndex = 35;
			this->numeric_minutes->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Black;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(736, 233);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(313, 25);
			this->label4->TabIndex = 34;
			this->label4->Text = L"Enter Hours-Minutes of reservation";
			// 
			// numeric_hours
			// 
			this->numeric_hours->Location = System::Drawing::Point(741, 270);
			this->numeric_hours->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 24, 0, 0, 0 });
			this->numeric_hours->Name = L"numeric_hours";
			this->numeric_hours->Size = System::Drawing::Size(81, 26);
			this->numeric_hours->TabIndex = 33;
			this->numeric_hours->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 11, 0, 0, 0 });
			// 
			// numeric_month
			// 
			this->numeric_month->Location = System::Drawing::Point(842, 174);
			this->numeric_month->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 12, 0, 0, 0 });
			this->numeric_month->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numeric_month->Name = L"numeric_month";
			this->numeric_month->Size = System::Drawing::Size(81, 26);
			this->numeric_month->TabIndex = 31;
			this->numeric_month->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Black;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(736, 137);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(330, 25);
			this->label5->TabIndex = 30;
			this->label5->Text = L"Enter Year-Month-Day of reservation";
			// 
			// numeric_year
			// 
			this->numeric_year->Location = System::Drawing::Point(741, 174);
			this->numeric_year->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3000, 0, 0, 0 });
			this->numeric_year->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2023, 0, 0, 0 });
			this->numeric_year->Name = L"numeric_year";
			this->numeric_year->Size = System::Drawing::Size(81, 26);
			this->numeric_year->TabIndex = 29;
			this->numeric_year->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2023, 0, 0, 0 });
			// 
			// numeric_day
			// 
			this->numeric_day->Location = System::Drawing::Point(943, 174);
			this->numeric_day->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			this->numeric_day->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numeric_day->Name = L"numeric_day";
			this->numeric_day->Size = System::Drawing::Size(81, 26);
			this->numeric_day->TabIndex = 27;
			this->numeric_day->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(741, 106);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(250, 3);
			this->panel3->TabIndex = 26;
			// 
			// reservation_number_plate
			// 
			this->reservation_number_plate->BackColor = System::Drawing::Color::Black;
			this->reservation_number_plate->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->reservation_number_plate->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->reservation_number_plate->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->reservation_number_plate->Location = System::Drawing::Point(741, 90);
			this->reservation_number_plate->Name = L"reservation_number_plate";
			this->reservation_number_plate->Size = System::Drawing::Size(244, 19);
			this->reservation_number_plate->TabIndex = 25;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Black;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(736, 52);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(357, 25);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Enter car registration number(ABC-123)";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Firebrick;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::Control;
			this->button4->Location = System::Drawing::Point(741, 322);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(136, 41);
			this->button4->TabIndex = 23;
			this->button4->Text = L"Reserve";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &workplace::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Black;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::Firebrick;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Firebrick;
			this->button5->Location = System::Drawing::Point(741, 609);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(136, 41);
			this->button5->TabIndex = 22;
			this->button5->Text = L"Back";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &workplace::button5_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Black;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label8->Location = System::Drawing::Point(736, 481);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(241, 25);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Total revenue generated : ";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// revenue_label
			// 
			this->revenue_label->AutoSize = true;
			this->revenue_label->BackColor = System::Drawing::Color::Black;
			this->revenue_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->revenue_label->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->revenue_label->Location = System::Drawing::Point(964, 481);
			this->revenue_label->Name = L"revenue_label";
			this->revenue_label->Size = System::Drawing::Size(0, 25);
			this->revenue_label->TabIndex = 25;
			this->revenue_label->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// workplace
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1064, 674);
			this->Controls->Add(this->reservation_panel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->reserve_button);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->number_plate_cheak_out);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->number_plate);
			this->Controls->Add(this->usernameLable);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->revenue_label);
			this->Controls->Add(this->label8);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(1064, 674);
			this->MinimumSize = System::Drawing::Size(1064, 674);
			this->Name = L"workplace";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &workplace::workplace_Load);
			this->reservation_panel->ResumeLayout(false);
			this->reservation_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_minutes))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_hours))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_month))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_year))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_day))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		for (int i = 0; i < total_floors; i++)
		{
			delete[] map[i];
		}
		delete[] map;

		Application::Exit();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		int j = 0; //floors

		if (this->number_plate->Text == "")
		{
			MessageBox::Show("You can not leave registration number empty", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else
		{
			bool parking_done = false;



			Time now;
			now.set_time_to_local_time();


			for (int i = 0, j = 0; j < total_floors; i++)
			{
				std::string temp;

				MarshalString(this->number_plate->Text, temp);
				if (map[j][i].get_reservation_car_number() == temp && parking_done == false && map[j][i].is_reserved() && map[j][i].reservation_cheak_in == now)
				{

					String^ temp_slot = gcnew String((map[j][i].get_slot_number()).ToString());
					String^ temp_floor = gcnew String(map[j][i].get_floor_number().ToString());

					parking_done = true;

					map[j][i].cheak_in.set_time_to_local_time();
					String^ message = gcnew String("Please park at floor : " + temp_floor + " slot : " + temp_slot);

					map[j][i].set_occupied(true);
					map[j][i].set_car_number(temp);


					MessageBox::Show(message, "Reserved parking done", MessageBoxButtons::OK);
					this->number_plate->Text = "";
					break;
				}
				if (i == (total_slots - 1))
				{
					i = -1;
					j++;
				}
			}


			for (int i = 0, j = 0; j < total_floors; i++)
			{
				if (map[j][i].is_occupied() == false && map[j][i].is_reserved() == false && parking_done == false)
				{
					std::string temp_number_plate;
					MarshalString(this->number_plate->Text, temp_number_plate);
					// car number plate saved

					String^ temp_slot = gcnew String((map[j][i].get_slot_number()).ToString());
					String^ temp_floor = gcnew String(map[j][i].get_floor_number().ToString());

					parking_done = true;

					map[j][i].cheak_in.set_time_to_local_time();
					String^ message = gcnew String("Please park at floor : " + temp_floor + " slot : " + temp_slot);

					map[j][i].set_occupied(true);
					map[j][i].set_car_number(temp_number_plate);


					MessageBox::Show(message, "Parking avaliable", MessageBoxButtons::OK);
					this->number_plate->Text = "";
					break;
				}
				if (i == (total_slots - 1))
				{
					i = -1;
					j++;
				}
			}

			for (int i = 0, j = 0; j < total_floors; i++)
			{
				if (map[j][i].is_occupied() == false && map[j][i].is_reserved() == true && parking_done == false && map[j][i].reservation_cheak_in < now)
				{
					String^ temp = gcnew String("parking avaliable till Date : " + map[j][i].reservation_cheak_in.day.ToString() + "-" + map[j][i].reservation_cheak_in.month.ToString() + "-" + map[j][i].reservation_cheak_in.year.ToString() + " time : " + map[j][i].reservation_cheak_in.hours.ToString() + ":" + map[j][i].reservation_cheak_in.min.ToString() + " do you want to park?");

					if (MessageBox::Show(temp, "Please confirm", MessageBoxButtons::YesNo) == Windows::Forms::DialogResult::Yes)
					{
						std::string temp_number_plate;
						MarshalString(this->number_plate->Text, temp_number_plate);

						String^ temp_slot = gcnew String((map[j][i].get_slot_number()).ToString());
						String^ temp_floor = gcnew String(map[j][i].get_floor_number().ToString());
						String^ message = gcnew String("Please park at floor : " + temp_floor + " slot : " + temp_slot);

						parking_done = true;

						map[j][i].cheak_in.set_time_to_local_time();

						map[j][i].set_occupied(true);
						map[j][i].set_car_number(temp_number_plate);


						MessageBox::Show(message, "", MessageBoxButtons::OK);
						this->number_plate->Text = "";
						break;
					}
				}

				if (i == (total_slots - 1))
				{
					i = -1;
					j++;
				}
			}

			if (parking_done == false)
			{
				MessageBox::Show("Sorry no parking avaliable", "No Parking avaliable", MessageBoxButtons::OK, MessageBoxIcon::Stop);
				this->number_plate->Text = "";
			}

		}
	}


	public:void MarshalString(String^ s, std::string& os) {
		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}


	private: System::Void number_plate_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int j = 0;
		int count = 0;
		std::string temp_number_plate;

		if (this->number_plate_cheak_out->Text == "")
		{
			MessageBox::Show("You can not leave registration number empty", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

		else
		{
			for (int i = 0, j = 0; j < total_floors; i++)
			{
				MarshalString(this->number_plate_cheak_out->Text, temp_number_plate);

				if (map[j][i].get_car_number() == temp_number_plate)
				{
					map[j][i].cheak_out.set_time_to_local_time();
					map[j][i].set_car_number("");
					map[j][i].set_occupied(false);

					if (map[j][i].is_reserved() && temp_number_plate == map[j][i].get_reservation_car_number())
					{
						map[j][i].set_reserved(false);
						map[j][i].set_reservation_car_number("");
						map[j][i].reset_reservation_time();

						reservation_list_box->Items->Remove(number_plate_cheak_out->Text);
					}

					float charges = map[j][i].calculate_charge_of_parking();

					revenue += charges;

					revenue_label->Text = revenue.ToString() + " Rs";

					String^ bill = charges.ToString();

					MessageBox::Show("Please pay " + bill + " Rs to cheak out", "Thank You", MessageBoxButtons::OK);
					map[j][i].reset_time();

					count++;

					this->number_plate_cheak_out->Text = "";
					break;
				}
				if (i == (total_slots - 1))
				{
					i = -1;
					j++;
				}
			}

			if (count == 0)
			{
				MessageBox::Show("No car with this registration number found", "Invalid registration number", MessageBoxButtons::OK, MessageBoxIcon::Error);
				this->number_plate_cheak_out->Text = "";
			}
		}
	}
	private: System::Void workplace_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void reserve_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->reservation_panel->Dock;
		this->reservation_panel->Show();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->reservation_number_plate->Text = "";
		this->reservation_list_box->Hide();
		this->button7->Hide();
		this->label7->Hide();
		this->reservation_panel->Hide();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		int count = 0;

		if (this->reservation_number_plate->Text == "")
		{
			MessageBox::Show("You can not leave registration number empty", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else
		{
			for (int i = 0, j = 0; j < total_floors; i++)
			{

				if (map[j][i].is_reserved() == false && map[j][i].is_occupied() == false)
				{
					std::string temp_number_plate;

					MarshalString(this->reservation_number_plate->Text, temp_number_plate);
					map[j][i].set_reservation_car_number(temp_number_plate);

					map[j][i].reservation_cheak_in.year = Convert::ToInt32(numeric_year->Value);
					map[j][i].reservation_cheak_in.month = Convert::ToInt32(numeric_month->Value);
					map[j][i].reservation_cheak_in.day = Convert::ToInt32(numeric_day->Value);
					map[j][i].reservation_cheak_in.day = Convert::ToInt32(numeric_day->Value);
					map[j][i].reservation_cheak_in.hours = Convert::ToInt32(numeric_hours->Value);
					map[j][i].reservation_cheak_in.min = Convert::ToInt32(numeric_minutes->Value);

					map[j][i].set_reserved(true);

					count++;

					String^ message = gcnew String("reservation made on slot " + (i + 1).ToString() + " floor " + (j + 1).ToString());

					this->reservation_list_box->Items->Add(reservation_number_plate->Text);

					MessageBox::Show(message, "Reservation completed", MessageBoxButtons::OK);

					break;
				}

				if (i == (total_slots - 1))
				{
					i = -1;
					j++;
				}
			}

			if (count == 0)
			{
				MessageBox::Show("No place avaliable for reservation", "Please try again later", MessageBoxButtons::OK);
			}

			this->reservation_list_box->Hide();
			this->button7->Hide();
			this->label7->Hide();
			this->reservation_number_plate->Text = "";
			this->reservation_panel->Hide();
			
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

		if (this->cancel_reservation_number_plate->Text == "")
		{
			MessageBox::Show("You can not leave registration number empty", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else
		{
			bool reservation_found = false;
			for (int i = 0, j = 0; j < total_floors; i++)
			{
				std::string temp;
				MarshalString(this->cancel_reservation_number_plate->Text, temp);
				if (map[j][i].is_reserved() == true && map[j][i].get_reservation_car_number() == temp)
				{
					map[j][i].set_reservation_car_number("");
					map[j][i].set_reserved(false);
					map[j][i].reservation_cheak_in.reset_time();
					reservation_found = true;

					String^ str = "Reservation cancelled of car with registration " + this->cancel_reservation_number_plate->Text;

					reservation_list_box->Items->Remove(cancel_reservation_number_plate->Text);

					MessageBox::Show(str, "Reservation Cancelled", MessageBoxButtons::OK);
					this->cancel_reservation_number_plate->Text = "";
					this->reservation_panel->Hide();

					break;
				}

				if (i == (total_slots - 1))
				{
					i = -1;
					j++;
				}
			}

			if (!reservation_found)
			{
				MessageBox::Show("No reservation with this registration number found", "Error", MessageBoxButtons::OK);
				this->cancel_reservation_number_plate->Text = "";
			}

			this->reservation_list_box->Hide();
			this->label7->Hide();
			this->button7->Hide();
		}
	};
	private: System::Void view_reservation_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->reservation_list_box->Show();
		this->button7->Show();
		this->label7->Show();
	}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->reservation_list_box->Hide();
	this->label7->Hide();
	this->button7->Hide();
}
};
}
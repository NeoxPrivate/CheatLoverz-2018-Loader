#pragma once

namespace LoaderApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Windows::Forms;
	using namespace System::Drawing;

	public ref class MainPage : public Form
	{
	public:
		MainPage(void)
		{
			InitializeComponent();
		}

	protected:
		~MainPage()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::Label^ labelWelcome;
		System::Windows::Forms::Label^ labelCheats;
		System::Windows::Forms::ComboBox^ comboCheats;
		System::Windows::Forms::Button^ buttonInject;
		System::Windows::Forms::Label^ labelID;
		System::Windows::Forms::CheckBox^ checkBoxSpoof;
		System::Windows::Forms::Button^ buttonRefreshSpoof;
		System::Windows::Forms::Button^ buttonCleanTraces;
		System::Windows::Forms::Button^ buttonChangePassword;
		System::ComponentModel::Container^ components;


#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->labelWelcome = (gcnew System::Windows::Forms::Label());
			this->labelCheats = (gcnew System::Windows::Forms::Label());
			this->comboCheats = (gcnew System::Windows::Forms::ComboBox());
			this->buttonInject = (gcnew System::Windows::Forms::Button());
			this->labelID = (gcnew System::Windows::Forms::Label());
			this->checkBoxSpoof = (gcnew System::Windows::Forms::CheckBox());
			this->buttonRefreshSpoof = (gcnew System::Windows::Forms::Button());
			this->buttonCleanTraces = (gcnew System::Windows::Forms::Button());
			this->buttonChangePassword = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
		
			this->labelWelcome->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->labelWelcome->Location = System::Drawing::Point(10, 8);
			this->labelWelcome->Name = L"labelWelcome";
			this->labelWelcome->Size = System::Drawing::Size(160, 16);
			this->labelWelcome->TabIndex = 0;
		
			this->labelCheats->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->labelCheats->Location = System::Drawing::Point(10, 30);
			this->labelCheats->Name = L"labelCheats";
			this->labelCheats->Size = System::Drawing::Size(120, 16);
			this->labelCheats->TabIndex = 2;
			this->labelCheats->Text = L"Subscribed Cheats:";
			
			this->comboCheats->BackColor = System::Drawing::SystemColors::ControlLight;
			this->comboCheats->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboCheats->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->comboCheats->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Fortnite" });
			this->comboCheats->Location = System::Drawing::Point(10, 50);
			this->comboCheats->Name = L"comboCheats";
			this->comboCheats->Size = System::Drawing::Size(260, 23);
			this->comboCheats->TabIndex = 3;
			
			this->buttonInject->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->buttonInject->Location = System::Drawing::Point(10, 80);
			this->buttonInject->Name = L"buttonInject";
			this->buttonInject->Size = System::Drawing::Size(84, 26);
			this->buttonInject->TabIndex = 4;
			this->buttonInject->Text = L"Inject";
			
			this->labelID->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->labelID->Location = System::Drawing::Point(100, 102);
			this->labelID->Name = L"labelID";
			this->labelID->Size = System::Drawing::Size(150, 16);
			this->labelID->TabIndex = 5;
			this->labelID->Click += gcnew System::EventHandler(this, &MainPage::labelID_Click);
		
			this->checkBoxSpoof->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->checkBoxSpoof->Location = System::Drawing::Point(53, 123);
			this->checkBoxSpoof->Name = L"checkBoxSpoof";
			this->checkBoxSpoof->Size = System::Drawing::Size(60, 20);
			this->checkBoxSpoof->TabIndex = 6;
			this->checkBoxSpoof->Text = L"Spoof";
			
			this->buttonRefreshSpoof->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->buttonRefreshSpoof->Location = System::Drawing::Point(135, 121);
			this->buttonRefreshSpoof->Name = L"buttonRefreshSpoof";
			this->buttonRefreshSpoof->Size = System::Drawing::Size(100, 23);
			this->buttonRefreshSpoof->TabIndex = 7;
			this->buttonRefreshSpoof->Text = L"Refresh Spoof";
			this->buttonRefreshSpoof->Click += gcnew System::EventHandler(this, &MainPage::buttonRefreshSpoof_Click);
			
			this->buttonCleanTraces->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->buttonCleanTraces->Location = System::Drawing::Point(53, 150);
			this->buttonCleanTraces->Name = L"buttonCleanTraces";
			this->buttonCleanTraces->Size = System::Drawing::Size(182, 23);
			this->buttonCleanTraces->TabIndex = 8;
			this->buttonCleanTraces->Text = L"Clean Traces";
		
			this->buttonChangePassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->buttonChangePassword->Location = System::Drawing::Point(180, 4);
			this->buttonChangePassword->Name = L"buttonChangePassword";
			this->buttonChangePassword->Size = System::Drawing::Size(92, 23);
			this->buttonChangePassword->TabIndex = 1;
			this->buttonChangePassword->Text = L"Change Pwd";
			
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(280, 190);
			this->Controls->Add(this->labelWelcome);
			this->Controls->Add(this->buttonChangePassword);
			this->Controls->Add(this->labelCheats);
			this->Controls->Add(this->comboCheats);
			this->Controls->Add(this->buttonInject);
			this->Controls->Add(this->labelID);
			this->Controls->Add(this->checkBoxSpoof);
			this->Controls->Add(this->buttonRefreshSpoof);
			this->Controls->Add(this->buttonCleanTraces);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MainPage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Cheat Loverz Client";
			this->ResumeLayout(false);

		}

		public:
			MainPage(System::String^ username)
			{
				InitializeComponent();
				this->labelWelcome->Text = "Welcome " + username + "!";
			}

#pragma endregion

	private:
		System::Void buttonChangePassword_Click(System::Object^ sender, System::EventArgs^ e) { }
		System::Void checkBoxSpoof_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { }
		System::Void labelID_Click(System::Object^ sender, System::EventArgs^ e) { }
		System::Void buttonRefreshSpoof_Click(System::Object^ sender, System::EventArgs^ e);

	};
}

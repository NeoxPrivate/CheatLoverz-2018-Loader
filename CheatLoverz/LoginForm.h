#pragma once
#include "MainPage.h"

namespace LoaderApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Windows::Forms;
	using namespace System::Drawing;

	public ref class LoginForm : public Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
		}

	protected:
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::Label^ labelUsername;
		System::Windows::Forms::Label^ labelPassword;
		System::Windows::Forms::Label^ labelInfo;
		System::Windows::Forms::TextBox^ textBoxUsername;
		System::Windows::Forms::TextBox^ textBoxPassword;
		System::Windows::Forms::Button^ buttonLogin;
		System::Windows::Forms::Button^ buttonCancel;
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->labelUsername = (gcnew System::Windows::Forms::Label());
			this->labelPassword = (gcnew System::Windows::Forms::Label());
			this->labelInfo = (gcnew System::Windows::Forms::Label());
			this->textBoxUsername = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->buttonLogin = (gcnew System::Windows::Forms::Button());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());

			this->buttonLogin->Click += gcnew System::EventHandler(this, &LoginForm::buttonLogin_Click);
			this->buttonCancel->Click += gcnew System::EventHandler(this, &LoginForm::buttonCancel_Click);

		
			this->labelUsername->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->labelUsername->Location = System::Drawing::Point(11, 18);
			this->labelUsername->Name = L"labelUsername";
			this->labelUsername->Size = System::Drawing::Size(65, 20);
			this->labelUsername->TabIndex = 0;
			this->labelUsername->Text = L"Username:";
		
			this->labelPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->labelPassword->Location = System::Drawing::Point(11, 50);
			this->labelPassword->Name = L"labelPassword";
			this->labelPassword->Size = System::Drawing::Size(65, 20);
			this->labelPassword->TabIndex = 1;
			this->labelPassword->Text = L"Password:";
	
			this->labelInfo->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8));
			this->labelInfo->Location = System::Drawing::Point(12, 76);
			this->labelInfo->Name = L"labelInfo";
			this->labelInfo->Size = System::Drawing::Size(200, 30);
			this->labelInfo->TabIndex = 2;
			this->labelInfo->Text = L"If you are using a third party spoofer\n Make sure to disable it before login";
			this->labelInfo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		
			this->textBoxUsername->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->textBoxUsername->Location = System::Drawing::Point(85, 15);
			this->textBoxUsername->Name = L"textBoxUsername";
			this->textBoxUsername->Size = System::Drawing::Size(133, 23);
			this->textBoxUsername->TabIndex = 3;
		
			this->textBoxPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->textBoxPassword->Location = System::Drawing::Point(85, 50);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->PasswordChar = '*';
			this->textBoxPassword->Size = System::Drawing::Size(133, 23);
			this->textBoxPassword->TabIndex = 4;
		
			this->buttonLogin->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->buttonLogin->Location = System::Drawing::Point(32, 109);
			this->buttonLogin->Name = L"buttonLogin";
			this->buttonLogin->Size = System::Drawing::Size(72, 25);
			this->buttonLogin->TabIndex = 5;
			this->buttonLogin->Text = L"Login";
			
			this->buttonCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->buttonCancel->Location = System::Drawing::Point(119, 109);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(83, 25);
			this->buttonCancel->TabIndex = 6;
			this->buttonCancel->Text = L"Cancel";
					
			
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(230, 150);
			this->Controls->Add(this->labelUsername);
			this->Controls->Add(this->labelPassword);
			this->Controls->Add(this->labelInfo);
			this->Controls->Add(this->textBoxUsername);
			this->Controls->Add(this->textBoxPassword);
			this->Controls->Add(this->buttonLogin);
			this->Controls->Add(this->buttonCancel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion

	private:
		void buttonLogin_Click(Object^ sender, EventArgs^ e);
		void buttonCancel_Click(Object^ sender, EventArgs^ e);

	private: System::Void labelInfo_Click(System::Object^ sender, System::EventArgs^ e) {}
	};
}
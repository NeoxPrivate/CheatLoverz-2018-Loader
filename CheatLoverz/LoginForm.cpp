#include "LoginForm.h"
#include "MainPage.h"

using namespace System;
using namespace System::Windows::Forms;

void LoaderApp::LoginForm::buttonLogin_Click(Object^ sender, EventArgs^ e)
{
    if (textBoxUsername->Text == "Neox" && textBoxPassword->Text == "")
    {
        this->Hide();

        System::Windows::Forms::DialogResult result = MessageBox::Show(
            "Please make sure all your games are closed\nPress Yes if they are\nPress No to close",
            "Warning!",
            MessageBoxButtons::YesNo,
            MessageBoxIcon::Warning
        );

        if (result == System::Windows::Forms::DialogResult::Yes)
        {
            String^ username = textBoxUsername->Text;
            LoaderApp::MainPage^ mainPage = gcnew LoaderApp::MainPage(username);
            mainPage->ShowDialog();
            this->Close();
        }
        else
        {
            Application::Exit();
        }
    }
    else
    {
        MessageBox::Show("Invalid username or password.", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}

void LoaderApp::LoginForm::buttonCancel_Click(Object^ sender, EventArgs^ e)
{
    this->Close();
}

[STAThreadAttribute]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    LoaderApp::LoginForm loginForm;
    Application::Run(% loginForm);

    return 0;
}
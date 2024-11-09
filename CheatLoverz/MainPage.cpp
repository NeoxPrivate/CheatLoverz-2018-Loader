#include "MainPage.h"
#include <ctime>  
#include <cstdlib> 

void LoaderApp::MainPage::buttonRefreshSpoof_Click(Object^ sender, EventArgs^ e)
{
    srand(static_cast<unsigned int>(time(0)));
    System::String^ newID = "  ";
    for (int i = 0; i < 4; ++i)
    {
        char letter = 'A' + rand() % 26;
        newID += gcnew System::String(gcnew cli::array<wchar_t>(1) { letter });
    }
    for (int i = 0; i < 8; ++i)
    {
        int digit = rand() % 10;
        newID += digit.ToString();
    }
    this->labelID->Text = newID;
}

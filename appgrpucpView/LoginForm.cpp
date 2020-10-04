#include "LoginForm.h"

using namespace System;
using namespace System::Windows::Forms;
//agregar el espacio de nombres del Controller:

[STAThread]

void main(array<String^>^ arg)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //XXXXXXXXXXX es el nombre del proyecto
    appgrpucpView::LoginForm form;
    Application::Run(% form);
}


System::Void appgrpucpView::LoginForm::linkRegister_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
{
    SignForm^ registro = gcnew SignForm();
    registro->Show();
}

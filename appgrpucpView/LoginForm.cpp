#include "LoginForm.h"
using namespace System;
using namespace System::Windows::Forms;
/*/agregar el espacio de nombres del Controller:
*/

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

System::Void appgrpucpView::LoginForm::btnLogin_Click(System::Object^ sender, System::EventArgs^ e)
{
    List<user^>^ listUsers = GestorUsuario::queryuser();
    for (int i = 0; i<listUsers->Count ; i++) {
        if (txtLoginUsername->Text == listUsers[i]->userName && txtLoginPassword->Text == listUsers[i]->password) {
            frmLayout^ ventanaPrincipal = gcnew frmLayout();
            ventanaPrincipal->Show();
            break;
        }

        if (listUsers->Count == i-1) {
            MessageBox::Show("Cuenta no registrada");
        }
    }
    
}

System::Void appgrpucpView::LoginForm::linkForgottenPassword_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
{
    RecoveryPasswordForm^ recoverypassword = gcnew RecoveryPasswordForm();
    recoverypassword->Show();

}

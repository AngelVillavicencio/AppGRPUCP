#include "SignForm.h"

System::Void appgrpucpView::SignForm::SignForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void appgrpucpView::SignForm::comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void appgrpucpView::SignForm::btnRegister_Click(System::Object^ sender, System::EventArgs^ e)
{
    user^ Nuevo_usuario = gcnew user();
    if (txtNames->Text != "" && txtLastNames->Text !="" && txtPersonalEmail->Text !="" && txtPhoneNumber->Text !="" && txtPucpCode->Text !="" &&
        txtPucpEmail->Text !="" && txtCarreer->Text !="" && txtCEname->Text !="" && txtCErelationship->Text !="" && txtCEphonenumber->Text != "" && 
        txtUserName->Text != "" && txtPassword->Text !="" && txtCheckPassword->Text->Equals(txtPassword->Text) && cmbGender->Text != "") {

        Nuevo_usuario->firstName = txtNames->Text;
        Nuevo_usuario->lastName = txtLastNames->Text;
        Nuevo_usuario->email = txtPersonalEmail->Text;
        Nuevo_usuario->phoneNumber = txtPhoneNumber->Text;
        Nuevo_usuario->codigoU = Convert::ToInt32(txtPucpCode->Text);
        Nuevo_usuario->emailPucp = txtPucpEmail->Text;
        Nuevo_usuario->career = txtCarreer->Text;
        Nuevo_usuario->contactEmergencyName = txtCEname->Text;
        Nuevo_usuario->contactEmergencyRelation = txtCErelationship->Text;
        Nuevo_usuario->phoneNumber = txtCEphonenumber->Text;
        Nuevo_usuario->userName = txtUserName->Text;
        Nuevo_usuario->password = txtPassword->Text;
        Nuevo_usuario->genre = cmbGender->Text;
        GestorUsuario::adduser(Nuevo_usuario);
        MessageBox::Show(Nuevo_usuario->genre);
        clear_SignForm();
    }
    else {
        MessageBox::Show("Completar Datos");
    }

}

System::Void appgrpucpView::SignForm::btnSelectPhoto_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (ofdSelectImage->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
        MyPhoto->Image = Image::FromFile(ofdSelectImage->FileName);

    }
}

System::Void appgrpucpView::SignForm::clear_SignForm()
{
    txtNames->Clear();
    txtLastNames->Clear();
    txtPersonalEmail->Clear();
    txtPhoneNumber->Clear();
    txtPucpCode->Clear();
    txtPucpEmail->Clear();
    txtCarreer->Clear();
    txtCEname->Clear();
    txtCErelationship->Clear();
    txtCEphonenumber->Clear();
    txtUserName->Clear();
    txtPassword->Clear();
}

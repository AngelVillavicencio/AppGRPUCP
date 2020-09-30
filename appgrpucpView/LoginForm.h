#pragma once

#include "SignForm.h"

namespace appgrpucpView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Resumen de LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ btnLogin;
	private: System::Windows::Forms::LinkLabel^ linkForgottenPassword;
	private: System::Windows::Forms::LinkLabel^ linkRegister;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->linkForgottenPassword = (gcnew System::Windows::Forms::LinkLabel());
			this->linkRegister = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(47, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Usuario";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(47, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Contraseña";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(200, 26);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(200, 72);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 3;
			// 
			// btnLogin
			// 
			this->btnLogin->Location = System::Drawing::Point(187, 143);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(125, 29);
			this->btnLogin->TabIndex = 4;
			this->btnLogin->Text = L"Ingresar";
			this->btnLogin->UseVisualStyleBackColor = true;
			// 
			// linkForgottenPassword
			// 
			this->linkForgottenPassword->AutoSize = true;
			this->linkForgottenPassword->Location = System::Drawing::Point(172, 209);
			this->linkForgottenPassword->Name = L"linkForgottenPassword";
			this->linkForgottenPassword->Size = System::Drawing::Size(150, 17);
			this->linkForgottenPassword->TabIndex = 5;
			this->linkForgottenPassword->TabStop = true;
			this->linkForgottenPassword->Text = L"Olvidó su contraseña\?";
			// 
			// linkRegister
			// 
			this->linkRegister->AutoSize = true;
			this->linkRegister->Location = System::Drawing::Point(213, 192);
			this->linkRegister->Name = L"linkRegister";
			this->linkRegister->Size = System::Drawing::Size(66, 17);
			this->linkRegister->TabIndex = 6;
			this->linkRegister->TabStop = true;
			this->linkRegister->Text = L"Registrar";
			this->linkRegister->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::linkRegister_LinkClicked);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(382, 242);
			this->Controls->Add(this->linkRegister);
			this->Controls->Add(this->linkForgottenPassword);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void linkRegister_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);
};
}

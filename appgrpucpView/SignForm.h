#pragma once

namespace appgrpucpView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace appgrpucpModel;
	using namespace appgrpucpController;
	using namespace appgrpucpView;

	/// <summary>
	/// Resumen de SignForm
	/// </summary>
	public ref class SignForm : public System::Windows::Forms::Form
	{
	public:
		SignForm(void)
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
		~SignForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtLastNames;
	protected:

	private: System::Windows::Forms::TextBox^ txtNames;
	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtPucpCode;


	private: System::Windows::Forms::TextBox^ txtPhoneNumber;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtCarreer;

	private: System::Windows::Forms::TextBox^ txtPucpEmail;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtCEphonenumber;

	private: System::Windows::Forms::TextBox^ txtCErelationship;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtCEname;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtPersonalEmail;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txtPassword;

	private: System::Windows::Forms::TextBox^ txtUserName;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ txtCheckPassword;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::PictureBox^ MyPhoto;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ btnSelectPhoto;

	public: System::Windows::Forms::OpenFileDialog^ ofdSelectImage;
	private: System::Windows::Forms::ComboBox^ cmbGender;
	public:

	public:
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::DateTimePicker^ dtpBornDay;

	private: System::Windows::Forms::Button^ btnRegister;


	private:


	private:

	private:



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtLastNames = (gcnew System::Windows::Forms::TextBox());
			this->txtNames = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtPucpCode = (gcnew System::Windows::Forms::TextBox());
			this->txtPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtCarreer = (gcnew System::Windows::Forms::TextBox());
			this->txtPucpEmail = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtCEphonenumber = (gcnew System::Windows::Forms::TextBox());
			this->txtCErelationship = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtCEname = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtPersonalEmail = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtUserName = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtCheckPassword = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->MyPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->btnSelectPhoto = (gcnew System::Windows::Forms::Button());
			this->ofdSelectImage = (gcnew System::Windows::Forms::OpenFileDialog());
			this->cmbGender = (gcnew System::Windows::Forms::ComboBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->dtpBornDay = (gcnew System::Windows::Forms::DateTimePicker());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MyPhoto))->BeginInit();
			this->SuspendLayout();
			// 
			// txtLastNames
			// 
			this->txtLastNames->Location = System::Drawing::Point(171, 108);
			this->txtLastNames->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtLastNames->Name = L"txtLastNames";
			this->txtLastNames->Size = System::Drawing::Size(428, 22);
			this->txtLastNames->TabIndex = 7;
			// 
			// txtNames
			// 
			this->txtNames->Location = System::Drawing::Point(171, 71);
			this->txtNames->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtNames->Name = L"txtNames";
			this->txtNames->Size = System::Drawing::Size(428, 22);
			this->txtNames->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(27, 108);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Apellidos";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(27, 68);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Nombres";
			// 
			// txtPucpCode
			// 
			this->txtPucpCode->Location = System::Drawing::Point(171, 295);
			this->txtPucpCode->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPucpCode->Name = L"txtPucpCode";
			this->txtPucpCode->Size = System::Drawing::Size(428, 22);
			this->txtPucpCode->TabIndex = 11;
			// 
			// txtPhoneNumber
			// 
			this->txtPhoneNumber->Location = System::Drawing::Point(171, 180);
			this->txtPhoneNumber->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPhoneNumber->Name = L"txtPhoneNumber";
			this->txtPhoneNumber->Size = System::Drawing::Size(428, 22);
			this->txtPhoneNumber->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(28, 295);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 17);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Codigo Pucp";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(27, 260);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(141, 17);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Fecha de Nacimiento";
			// 
			// txtCarreer
			// 
			this->txtCarreer->Location = System::Drawing::Point(171, 372);
			this->txtCarreer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtCarreer->Name = L"txtCarreer";
			this->txtCarreer->Size = System::Drawing::Size(428, 22);
			this->txtCarreer->TabIndex = 15;
			// 
			// txtPucpEmail
			// 
			this->txtPucpEmail->Location = System::Drawing::Point(171, 335);
			this->txtPucpEmail->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPucpEmail->Name = L"txtPucpEmail";
			this->txtPucpEmail->Size = System::Drawing::Size(428, 22);
			this->txtPucpEmail->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(28, 372);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 17);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Carrera";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(28, 335);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(87, 17);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Correo Pucp";
			// 
			// txtCEphonenumber
			// 
			this->txtCEphonenumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCEphonenumber->Location = System::Drawing::Point(169, 523);
			this->txtCEphonenumber->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtCEphonenumber->Name = L"txtCEphonenumber";
			this->txtCEphonenumber->Size = System::Drawing::Size(289, 22);
			this->txtCEphonenumber->TabIndex = 23;
			// 
			// txtCErelationship
			// 
			this->txtCErelationship->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtCErelationship->Location = System::Drawing::Point(171, 489);
			this->txtCErelationship->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtCErelationship->Name = L"txtCErelationship";
			this->txtCErelationship->Size = System::Drawing::Size(288, 22);
			this->txtCErelationship->TabIndex = 22;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(27, 524);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(126, 17);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Número de Celular";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(28, 489);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(80, 17);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Parentesco";
			// 
			// txtCEname
			// 
			this->txtCEname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCEname->Location = System::Drawing::Point(171, 453);
			this->txtCEname->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtCEname->Name = L"txtCEname";
			this->txtCEname->Size = System::Drawing::Size(288, 22);
			this->txtCEname->TabIndex = 19;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(28, 453);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(58, 17);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Nombre";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(28, 415);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(296, 20);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Contacto en Caso de Emergencia:";
			// 
			// txtPersonalEmail
			// 
			this->txtPersonalEmail->Location = System::Drawing::Point(171, 144);
			this->txtPersonalEmail->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPersonalEmail->Name = L"txtPersonalEmail";
			this->txtPersonalEmail->Size = System::Drawing::Size(428, 22);
			this->txtPersonalEmail->TabIndex = 25;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(28, 144);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(111, 17);
			this->label11->TabIndex = 24;
			this->label11->Text = L"Correo Personal";
			// 
			// txtPassword
			// 
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPassword->Location = System::Drawing::Point(612, 490);
			this->txtPassword->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(281, 22);
			this->txtPassword->TabIndex = 29;
			// 
			// txtUserName
			// 
			this->txtUserName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUserName->Location = System::Drawing::Point(612, 448);
			this->txtUserName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtUserName->Name = L"txtUserName";
			this->txtUserName->Size = System::Drawing::Size(281, 22);
			this->txtUserName->TabIndex = 28;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(477, 494);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(81, 17);
			this->label12->TabIndex = 27;
			this->label12->Text = L"Contraseña";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(477, 452);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(131, 17);
			this->label13->TabIndex = 26;
			this->label13->Text = L"Nombre de Usuario";
			// 
			// txtCheckPassword
			// 
			this->txtCheckPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCheckPassword->Location = System::Drawing::Point(612, 529);
			this->txtCheckPassword->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtCheckPassword->Name = L"txtCheckPassword";
			this->txtCheckPassword->Size = System::Drawing::Size(283, 22);
			this->txtCheckPassword->TabIndex = 31;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(477, 534);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(141, 17);
			this->label14->TabIndex = 30;
			this->label14->Text = L"Confirme Contraseña";
			// 
			// MyPhoto
			// 
			this->MyPhoto->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->MyPhoto->Location = System::Drawing::Point(631, 49);
			this->MyPhoto->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MyPhoto->Name = L"MyPhoto";
			this->MyPhoto->Size = System::Drawing::Size(273, 244);
			this->MyPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->MyPhoto->TabIndex = 32;
			this->MyPhoto->TabStop = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(27, 22);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(213, 24);
			this->label15->TabIndex = 33;
			this->label15->Text = L"Información Personal:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(477, 415);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(204, 20);
			this->label16->TabIndex = 34;
			this->label16->Text = L"Información de Cuenta:";
			// 
			// btnSelectPhoto
			// 
			this->btnSelectPhoto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSelectPhoto->Location = System::Drawing::Point(693, 313);
			this->btnSelectPhoto->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnSelectPhoto->Name = L"btnSelectPhoto";
			this->btnSelectPhoto->Size = System::Drawing::Size(165, 36);
			this->btnSelectPhoto->TabIndex = 35;
			this->btnSelectPhoto->Text = L"Seleccionar Imagen";
			this->btnSelectPhoto->UseVisualStyleBackColor = true;
			this->btnSelectPhoto->Click += gcnew System::EventHandler(this, &SignForm::btnSelectPhoto_Click);
			// 
			// ofdSelectImage
			// 
			this->ofdSelectImage->Filter = L"Archivo JPEG|*.jpeg|Archivo JPG|*.JPG|Archivo PNG|*.png|Archivo jpg|*.jpg";
			this->ofdSelectImage->Title = L"Seleccionar Imagen";
			this->ofdSelectImage->ValidateNames = false;
			// 
			// cmbGender
			// 
			this->cmbGender->FormattingEnabled = true;
			this->cmbGender->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Femenino", L"Masculino", L"Otro" });
			this->cmbGender->Location = System::Drawing::Point(172, 215);
			this->cmbGender->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cmbGender->Name = L"cmbGender";
			this->cmbGender->Size = System::Drawing::Size(121, 24);
			this->cmbGender->TabIndex = 36;
			this->cmbGender->SelectedIndexChanged += gcnew System::EventHandler(this, &SignForm::comboBox1_SelectedIndexChanged);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(27, 223);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(39, 17);
			this->label17->TabIndex = 37;
			this->label17->Text = L"Sexo";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(27, 180);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(126, 17);
			this->label18->TabIndex = 38;
			this->label18->Text = L"Numero de Celular";
			// 
			// dtpBornDay
			// 
			this->dtpBornDay->Location = System::Drawing::Point(172, 256);
			this->dtpBornDay->Margin = System::Windows::Forms::Padding(4);
			this->dtpBornDay->Name = L"dtpBornDay";
			this->dtpBornDay->Size = System::Drawing::Size(265, 22);
			this->dtpBornDay->TabIndex = 40;
			// 
			// btnRegister
			// 
			this->btnRegister->Location = System::Drawing::Point(703, 578);
			this->btnRegister->Margin = System::Windows::Forms::Padding(4);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(201, 34);
			this->btnRegister->TabIndex = 41;
			this->btnRegister->Text = L"Registrarme";
			this->btnRegister->UseVisualStyleBackColor = true;
			this->btnRegister->Click += gcnew System::EventHandler(this, &SignForm::btnRegister_Click);
			// 
			// SignForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(955, 644);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->dtpBornDay);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->cmbGender);
			this->Controls->Add(this->btnSelectPhoto);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->MyPhoto);
			this->Controls->Add(this->txtCheckPassword);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtUserName);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->txtPersonalEmail);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->txtCEphonenumber);
			this->Controls->Add(this->txtCErelationship);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txtCEname);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->txtCarreer);
			this->Controls->Add(this->txtPucpEmail);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtPucpCode);
			this->Controls->Add(this->txtPhoneNumber);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtLastNames);
			this->Controls->Add(this->txtNames);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"SignForm";
			this->Text = L"Registro de Usuario";
			this->Load += gcnew System::EventHandler(this, &SignForm::SignForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MyPhoto))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SignForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnSelectPhoto_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void clear_SignForm();
	};
}
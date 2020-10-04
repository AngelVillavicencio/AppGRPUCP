#pragma once

namespace appgrpucpView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::TextBox^ textBox2;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::PictureBox^ MyPhoto;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ button1;
	public: System::Windows::Forms::OpenFileDialog^ ofdSelectImage;
	private:


	private:

	private:



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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->MyPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->ofdSelectImage = (gcnew System::Windows::Forms::OpenFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MyPhoto))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(229, 132);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 7;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(229, 86);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(49, 137);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Apellidos";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(49, 91);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Nombres";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(229, 271);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 11;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(229, 221);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(49, 276);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 17);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Codigo Pucp";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(49, 226);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(141, 17);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Fecha de Nacimiento";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(229, 366);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 15;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(229, 320);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(49, 371);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 17);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Carrera";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(49, 325);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(87, 17);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Correo Pucp";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(579, 178);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 23;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(580, 135);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 22);
			this->textBox8->TabIndex = 22;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(399, 183);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(126, 17);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Número de Celular";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(401, 140);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(80, 17);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Parentesco";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(580, 91);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 22);
			this->textBox9->TabIndex = 19;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(400, 96);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(58, 17);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Nombre";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(400, 50);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(223, 17);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Contacto en Caso de Emergencia:";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(229, 176);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 22);
			this->textBox10->TabIndex = 25;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(49, 181);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(111, 17);
			this->label11->TabIndex = 24;
			this->label11->Text = L"Correo Personal";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(581, 317);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 22);
			this->textBox11->TabIndex = 29;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(581, 266);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 22);
			this->textBox12->TabIndex = 28;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(401, 322);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(81, 17);
			this->label12->TabIndex = 27;
			this->label12->Text = L"Contraseña";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(401, 271);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(131, 17);
			this->label13->TabIndex = 26;
			this->label13->Text = L"Nombre de Usuario";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(580, 367);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 22);
			this->textBox13->TabIndex = 31;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(401, 372);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(141, 17);
			this->label14->TabIndex = 30;
			this->label14->Text = L"Confirme Contraseña";
			// 
			// MyPhoto
			// 
			this->MyPhoto->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->MyPhoto->Location = System::Drawing::Point(741, 50);
			this->MyPhoto->Name = L"MyPhoto";
			this->MyPhoto->Size = System::Drawing::Size(211, 203);
			this->MyPhoto->TabIndex = 32;
			this->MyPhoto->TabStop = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(49, 50);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(145, 17);
			this->label15->TabIndex = 33;
			this->label15->Text = L"Información Personal:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(401, 226);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(154, 17);
			this->label16->TabIndex = 34;
			this->label16->Text = L"Información de Cuenta:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(763, 271);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(166, 36);
			this->button1->TabIndex = 35;
			this->button1->Text = L"Seleccionar Imagen";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SignForm::button1_Click);
			// 
			// ofdSelectImage
			// 
			this->ofdSelectImage->Filter = L"Archivo JPEG|*.jpeg|Archivo JPG|*.JPG|Archivo PNG|*.png|Archivo jpg|*.jpg";
			this->ofdSelectImage->Title = L"Seleccionar Imagen";
			this->ofdSelectImage->ValidateNames = false;
			// 
			// SignForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(989, 441);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->MyPhoto);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"SignForm";
			this->Text = L"Registro de Usuario";
			this->Load += gcnew System::EventHandler(this, &SignForm::SignForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MyPhoto))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SignForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
};
}

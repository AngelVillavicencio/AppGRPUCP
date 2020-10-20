#pragma once
#include "frmRegistro.h"
namespace appgrpucpView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmMantUsuario1
	/// </summary>
	public ref class frmMantUsuario1 : public System::Windows::Forms::Form
	{
	public:
		frmMantUsuario1(void)
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
		~frmMantUsuario1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:



	
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ email;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ usuario;




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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->email = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->usuario = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->id, this->name,
					this->email, this->Column1, this->usuario
			});
			this->dataGridView1->Location = System::Drawing::Point(87, 146);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1000, 391);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(129, 580);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(193, 39);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Create";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantUsuario1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(461, 581);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(230, 37);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Modicar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantUsuario1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(840, 580);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(185, 37);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Delete";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(208, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Nombre del usuario:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(343, 39);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(254, 20);
			this->textBox1->TabIndex = 5;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(664, 36);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Buscar";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(103, 22);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(962, 89);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Busqueda de usuario";
			// 
			// id
			// 
			this->id->HeaderText = L"Id usuario";
			this->id->Name = L"id";
			// 
			// name
			// 
			this->name->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->name->HeaderText = L"Nombre del Usuario";
			this->name->Name = L"name";
			// 
			// email
			// 
			this->email->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->email->HeaderText = L"email";
			this->email->Name = L"email";
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Usuario";
			this->Column1->Name = L"Column1";
			// 
			// usuario
			// 
			this->usuario->HeaderText = L"contraseña";
			this->usuario->Name = L"usuario";
			// 
			// frmMantUsuario1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1122, 678);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"frmMantUsuario1";
			this->Text = L"frmMantUsuario1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int tipo = 2; // si tipo es 2 entonces la pantalla me va servir para modificar sus datos 
		frmRegistro^ ventanaRegistro = gcnew frmRegistro(tipo);
		ventanaRegistro->Show();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int tipo = 1; // si tipo es 1 entonces vas a registrar
	frmRegistro^ ventanaRegistro = gcnew frmRegistro(tipo);
	ventanaRegistro->Show();

}
};
}

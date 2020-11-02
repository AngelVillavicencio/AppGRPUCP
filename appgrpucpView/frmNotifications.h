#pragma once

namespace appgrpucpView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmNotifications
	/// </summary>
public ref class frmNotifications : public System::Windows::Forms::Form
{
public:
	frmNotifications(void)
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
	~frmNotifications()
	{
		if (components)
		{
			delete components;
		}
	}
private: System::Windows::Forms::MenuStrip^ menuStrip1;
protected:
private: System::Windows::Forms::ToolStripMenuItem^ tareasToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ realizadasToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ porRealizarToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ historialToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ meetingsToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ cuestionariosToolStripMenuItem;

protected:
private: System::ComponentModel::IContainer^ components;

protected:




private:
	/// <summary>
	/// Variable del diseñador necesaria.
	/// </summary>


#pragma region Windows Form Designer generated code
	/// <summary>
	/// Método necesario para admitir el Diseñador. No se puede modificar
	/// el contenido de este método con el editor de código.
	/// </summary>
	void InitializeComponent(void)
	{
		this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
		this->tareasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->meetingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->cuestionariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->realizadasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->porRealizarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->historialToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->menuStrip1->SuspendLayout();
		this->SuspendLayout();
		// 
		// menuStrip1
		// 
		this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
			this->tareasToolStripMenuItem,
				this->meetingsToolStripMenuItem, this->cuestionariosToolStripMenuItem
		});
		this->menuStrip1->Location = System::Drawing::Point(0, 0);
		this->menuStrip1->Name = L"menuStrip1";
		this->menuStrip1->Size = System::Drawing::Size(1123, 24);
		this->menuStrip1->TabIndex = 0;
		this->menuStrip1->Text = L"menuStrip1";
		// 
		// tareasToolStripMenuItem
		// 
		this->tareasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
			this->realizadasToolStripMenuItem,
				this->porRealizarToolStripMenuItem, this->historialToolStripMenuItem
		});
		this->tareasToolStripMenuItem->Name = L"tareasToolStripMenuItem";
		this->tareasToolStripMenuItem->Size = System::Drawing::Size(51, 20);
		this->tareasToolStripMenuItem->Text = L"Tareas";
		this->tareasToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmNotifications::tareasToolStripMenuItem_Click);
		// 
		// meetingsToolStripMenuItem
		// 
		this->meetingsToolStripMenuItem->Name = L"meetingsToolStripMenuItem";
		this->meetingsToolStripMenuItem->Size = System::Drawing::Size(68, 20);
		this->meetingsToolStripMenuItem->Text = L"Meetings";
		this->meetingsToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmNotifications::meetingsToolStripMenuItem_Click);
		// 
		// cuestionariosToolStripMenuItem
		// 
		this->cuestionariosToolStripMenuItem->Name = L"cuestionariosToolStripMenuItem";
		this->cuestionariosToolStripMenuItem->Size = System::Drawing::Size(91, 20);
		this->cuestionariosToolStripMenuItem->Text = L"Cuestionarios";
		this->cuestionariosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmNotifications::cuestionariosToolStripMenuItem_Click);
		// 
		// realizadasToolStripMenuItem
		// 
		this->realizadasToolStripMenuItem->Name = L"realizadasToolStripMenuItem";
		this->realizadasToolStripMenuItem->Size = System::Drawing::Size(180, 22);
		this->realizadasToolStripMenuItem->Text = L"Realizadas";
		// 
		// porRealizarToolStripMenuItem
		// 
		this->porRealizarToolStripMenuItem->Name = L"porRealizarToolStripMenuItem";
		this->porRealizarToolStripMenuItem->Size = System::Drawing::Size(180, 22);
		this->porRealizarToolStripMenuItem->Text = L"Pendientes";
		// 
		// historialToolStripMenuItem
		// 
		this->historialToolStripMenuItem->Name = L"historialToolStripMenuItem";
		this->historialToolStripMenuItem->Size = System::Drawing::Size(180, 22);
		this->historialToolStripMenuItem->Text = L"Historial";
		// 
		// frmNotifications
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(1123, 687);
		this->Controls->Add(this->menuStrip1);
		this->Name = L"frmNotifications";
		this->Text = L"Notifications";
		this->Load += gcnew System::EventHandler(this, &frmNotifications::frmNotifications_Load);
		this->menuStrip1->ResumeLayout(false);
		this->menuStrip1->PerformLayout();
		this->ResumeLayout(false);
		this->PerformLayout();

	}
#pragma endregion
private: System::Void meetingsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void tareasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void cuestionariosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void frmNotifications_Load(System::Object^ sender, System::EventArgs^ e) {
}



};
}

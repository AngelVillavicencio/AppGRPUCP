#pragma once
#include "frmTasks.h"
#include "frmMeetings.h"
#include "frmTalleres.h"
#include "CalendarForm.h"

namespace appgrpucpView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	

	/// <summary>
	/// Resumen de frmLayout
	/// </summary>
	/// 

	/*public ref class FormCollection : System::Collections::ReadOnlyCollectionBase {

	public: IGNORAR ESTOOOO 
		FormCollection();

	};*/

	public ref class frmLayout : public System::Windows::Forms::Form
	{
	private: String^ date_; //Variable Global que servirá para todas las ventanas
	public:
		frmLayout(void)
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
		~frmLayout()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ perfilToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ yourCalendarToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ talleresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ notificacionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dataComponentsToolStripMenuItem;

	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Timer^ timer1;
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
			this->components = (gcnew System::ComponentModel::Container());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->yourCalendarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->notificacionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->talleresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataComponentsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->perfilToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->menuStrip1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(232, 602);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmLayout::panel1_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(56, 10);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(126, 124);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->yourCalendarToolStripMenuItem,
					this->notificacionesToolStripMenuItem, this->talleresToolStripMenuItem, this->dataComponentsToolStripMenuItem, this->perfilToolStripMenuItem
			});
			this->menuStrip1->LayoutStyle = System::Windows::Forms::ToolStripLayoutStyle::VerticalStackWithOverflow;
			this->menuStrip1->Location = System::Drawing::Point(8, 159);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(197, 245);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &frmLayout::menuStrip1_ItemClicked);
			// 
			// yourCalendarToolStripMenuItem
			// 
			this->yourCalendarToolStripMenuItem->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->yourCalendarToolStripMenuItem->Name = L"yourCalendarToolStripMenuItem";
			this->yourCalendarToolStripMenuItem->Size = System::Drawing::Size(192, 34);
			this->yourCalendarToolStripMenuItem->Text = L"Your Calendar";
			this->yourCalendarToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmLayout::yourCalendarToolStripMenuItem_Click);
			// 
			// notificacionesToolStripMenuItem
			// 
			this->notificacionesToolStripMenuItem->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->notificacionesToolStripMenuItem->Name = L"notificacionesToolStripMenuItem";
			this->notificacionesToolStripMenuItem->Size = System::Drawing::Size(192, 34);
			this->notificacionesToolStripMenuItem->Text = L"Notificaciones";
			this->notificacionesToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmLayout::notificacionesToolStripMenuItem_Click);
			// 
			// talleresToolStripMenuItem
			// 
			this->talleresToolStripMenuItem->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->talleresToolStripMenuItem->Name = L"talleresToolStripMenuItem";
			this->talleresToolStripMenuItem->Size = System::Drawing::Size(192, 34);
			this->talleresToolStripMenuItem->Text = L"Talleres";
			this->talleresToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmLayout::talleresToolStripMenuItem_Click);
			// 
			// dataComponentsToolStripMenuItem
			// 
			this->dataComponentsToolStripMenuItem->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->dataComponentsToolStripMenuItem->Name = L"dataComponentsToolStripMenuItem";
			this->dataComponentsToolStripMenuItem->Size = System::Drawing::Size(192, 34);
			this->dataComponentsToolStripMenuItem->Text = L"Data Components";
			this->dataComponentsToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmLayout::dataComponentsToolStripMenuItem_Click);
			// 
			// perfilToolStripMenuItem
			// 
			this->perfilToolStripMenuItem->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->perfilToolStripMenuItem->Name = L"perfilToolStripMenuItem";
			this->perfilToolStripMenuItem->Size = System::Drawing::Size(192, 34);
			this->perfilToolStripMenuItem->Text = L"Perfil";
			this->perfilToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmLayout::ClickPerfil);
			// 
			// frmLayout
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1181, 602);
			this->Controls->Add(this->panel1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"frmLayout";
			this->Text = L"frmLayout";
			this->Load += gcnew System::EventHandler(this, &frmLayout::frmLayout_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
	}
	private: System::Void tasksToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
/*<<<<<<< HEAD*/
	frmTasks^ tareasVentana = gcnew frmTasks();
	tareasVentana->MdiParent = this;
	tareasVentana->Show();
}
private: System::Void meetingsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMeetings^ meetingsVentana = gcnew frmMeetings();
	meetingsVentana->MdiParent = this;
	meetingsVentana->Show();
}
private: System::Void talleresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); 
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void notificacionesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void yourCalendarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
/*=======
		frmTasks^ tareasVentana = gcnew frmTasks();
		tareasVentana->MdiParent = this;
		tareasVentana->Show();
	}
	private: System::Void meetingsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMeetings^ meetingsVentana = gcnew frmMeetings();
		meetingsVentana->MdiParent = this;
		meetingsVentana->Show();
	}
	private: System::Void talleresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmTalleres^ talleresVentana = gcnew frmTalleres();
		talleresVentana->MdiParent = this;
		talleresVentana->Show();
	}
	private: System::Void yourCalendarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		CalendarForm^ mycalendar = gcnew CalendarForm(date_);
		mycalendar->MdiParent = this;
		mycalendar->Show();
	}*/
	private: System::Void frmLayout_Load(System::Object^ sender, System::EventArgs^ e);

private: System::Void dataComponentsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ClickPerfil(System::Object^ sender, System::EventArgs^ e);
};
}

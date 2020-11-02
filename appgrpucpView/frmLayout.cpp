#include "frmLayout.h"
#include "frmNotifications.h"

/*
=======

>>>>>>> Antony*/

using namespace System;
using namespace System::Windows::Forms;
//agregar el espacio de nombres del Controller:

[STAThread]

void main(array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	appgrpucpView::frmLayout form;
	Application::Run(% form);
}
/*
<<<<<<< HEAD
*/

System::Void appgrpucpView::frmLayout::notificacionesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	frmNotifications^ notificationsVentana = gcnew frmNotifications();
	notificationsVentana->MdiParent = this;
	notificationsVentana->Show();
}

System::Void appgrpucpView::frmLayout::yourCalendarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	/*falta traer el calendar*/

}


System::Void appgrpucpView::frmLayout::frmLayout_Load(System::Object^ sender, System::EventArgs^ e)
{
	date_= Convert::ToString(DateTime::Now.Date);


}

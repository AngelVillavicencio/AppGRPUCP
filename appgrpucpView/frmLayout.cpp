#include "frmLayout.h"
#include "frmNotifications.h"

/*

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

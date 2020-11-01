#include "frmLayout.h"
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

System::Void appgrpucpView::frmLayout::frmLayout_Load(System::Object^ sender, System::EventArgs^ e)
{
	date_= Convert::ToString(DateTime::Now.Date);

}

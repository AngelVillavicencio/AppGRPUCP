#include "frmPrincipal.h"


using namespace System;
using namespace System::Windows::Forms;
//agregar el espacio de nombres del Controller:

[STAThread]

void main(array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	appgrpucpView::frmPrincipal form;
	Application::Run(% form);
}


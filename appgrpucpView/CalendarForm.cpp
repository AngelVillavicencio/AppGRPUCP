#include "CalendarForm.h"

using namespace System::Windows::Forms;

System::Void appgrpucpView::CalendarForm::btnNextMonth_Click(System::Object^ sender, System::EventArgs^ e)
{
    int p = flowLayoutPanel1->Controls->Count;
    MessageBox::Show("El número de paneles es :" + p);
    for (int i = 0; i < 15 ; i++) {
        flowLayoutPanel1->Controls[i+2]->BackColor = System::Drawing::SystemColors::Highlight;
    }
    

}

System::Void appgrpucpView::CalendarForm::btnPreviousMonth_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

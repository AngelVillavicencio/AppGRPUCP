#include "CalendarForm.h"

using namespace System::Windows::Forms;

System::Void appgrpucpView::CalendarForm::btnNextMonth_Click(System::Object^ sender, System::EventArgs^ e)
{
    fecha[1] += 1;
    if (fecha[1] == 13) {
        fecha[1] = 1;
    }
    DateTime^ day_selected = DateTime(fecha[2], fecha[1], 1);
    String^ day_name = Convert::ToString(day_selected->DayOfWeek);
    int total_days = DateTime::DaysInMonth(fecha[2], fecha[1]);
    int day_colum;
    String^ month;

    if (day_name->Equals("Sunday")) {
        day_colum = 0;
    }
    else if (day_name->Equals("Monday")) {
        day_colum = 1;
    }
    else if (day_name->Equals("Tuesday")) {
        day_colum = 2;
    }
    else if (day_name->Equals("Wednesday")) {
        day_colum = 3;
    }
    else if (day_name->Equals("Thursday")) {
        day_colum = 4;
    }
    else if (day_name->Equals("Friday")) {
        day_colum = 5;
    }
    else {
        day_colum = 6;
    }

    int firs_day_of_month = day_colum;

    // MessageBox::Show("dia"+ fecha[0] + " mes" + fecha[1] + " año "+ fecha[2] + "primer dia" + firs_day_of_month);

    for (int i = 0; i < 35; i++) {
        flowLayoutPanel1->Controls[i]->BackColor = System::Drawing::SystemColors::ButtonHighlight;
    }

    for (int i = 0; i < firs_day_of_month; i++) {
        flowLayoutPanel1->Controls[i]->BackColor = System::Drawing::SystemColors::ButtonFace;
    }

    for (int i = firs_day_of_month + total_days; i < 42; i++) {
        flowLayoutPanel1->Controls[i]->BackColor = System::Drawing::SystemColors::ButtonFace;
    }

    if (fecha[1] == 1) {
        month = "Enero";
    }
    else if (fecha[1] == 2) {
        month = "Febrero";
    }
    else if (fecha[1] == 3) {
        month = "Marzo";
    }
    else if (fecha[1] == 4) {
        month = "Abril";
    }
    else if (fecha[1] == 5) {
        month = "Mayo";
    }
    else if (fecha[1] == 6) {
        month = "Junio";
    }
    else if (fecha[1] == 7) {
        month = "Julio";
    }
    else if (fecha[1] == 8) {
        month = "Agosto";
    }
    else if (fecha[1] == 9) {
        month = "Septiembre";
    }
    else if (fecha[1] == 10) {
        month = "Octubre";
    }
    else if (fecha[1] == 11) {
        month = "Noviembre";
    }
    else {
        month = "Diciembre";
    }

    labelDate->Text = month + "," + fecha[2];
}

System::Void appgrpucpView::CalendarForm::btnPreviousMonth_Click(System::Object^ sender, System::EventArgs^ e)
{

    fecha[1] += - 1 ;
    if (fecha[1] == 0) {
        fecha[1] = 12;
    }
    DateTime^ day_selected = DateTime(fecha[2], fecha[1], 1);
    String^ day_name = Convert::ToString(day_selected->DayOfWeek);
    int total_days = DateTime::DaysInMonth(fecha[2], fecha[1]);
    int day_colum;
    String^ month;

    if (day_name->Equals("Sunday")) {
        day_colum = 0;
    }else if (day_name->Equals("Monday")) {
        day_colum = 1;
    }
    else if (day_name->Equals("Tuesday")) {
        day_colum = 2;
    }
    else if (day_name->Equals("Wednesday")) {
        day_colum = 3;
    }
    else if (day_name->Equals("Thursday")) {
        day_colum = 4;
    }
    else if (day_name->Equals("Friday")) {
        day_colum = 5;
    }
    else {
        day_colum = 6;
    }

    int firs_day_of_month = day_colum;

   // MessageBox::Show("dia"+ fecha[0] + " mes" + fecha[1] + " año "+ fecha[2] + "primer dia" + firs_day_of_month);

    for (int i = 0; i < 35; i++) {
        flowLayoutPanel1->Controls[i]->BackColor = System::Drawing::SystemColors::ButtonHighlight;
    }

    for (int i = 0; i < firs_day_of_month ; i++) {
        flowLayoutPanel1->Controls[i]->BackColor = System::Drawing::SystemColors::ButtonFace;
    }

    for (int i = firs_day_of_month + total_days; i < 42 ; i++) {
        flowLayoutPanel1->Controls[i]->BackColor = System::Drawing::SystemColors::ButtonFace;
    }

    if (fecha[1] == 1) {
        month = "Enero";
    }
    else if (fecha[1] == 2) {
        month = "Febrero";
    }
    else if (fecha[1] == 3) {
        month = "Marzo";
    }
    else if (fecha[1] == 4) {
        month = "Abril";
    }
    else if (fecha[1] == 5) {
        month = "Mayo";
    }
    else if (fecha[1] == 6) {
        month = "Junio";
    }
    else if (fecha[1] == 7) {
        month = "Julio";
    }
    else if (fecha[1] == 8) {
        month = "Agosto";
    }
    else if (fecha[1] == 9) {
        month = "Septiembre";
    }
    else if (fecha[1] == 10) {
        month = "Octubre";
    }
    else if (fecha[1] == 11) {
        month = "Noviembre";
    }
    else {
        month = "Diciembre";
    }

    labelDate->Text = month + "," + fecha[2];


 
}

System::Void appgrpucpView::CalendarForm::CalendarForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    array<String^>^ date_info = date_->Split('/');
    fecha->Add(Convert::ToInt16(date_info[0]));
    fecha->Add(Convert::ToInt16(date_info[1]));
    fecha->Add(Convert::ToInt16(date_info[2]->Substring(0,4)));

}

#include "csMainControlWidget.h"

CsMainControlWidget::CsMainControlWidget(wxWindow *parent, wxWindowID id, const wxPoint &pos, const wxSize &size, long style)
	: wxPanel(parent, id, pos, size, style)
{
	wxBoxSizer *backgroundSizer = new wxBoxSizer(wxVERTICAL);
	
	wxNotebook *controlNotebook = new wxNotebook(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxNB_TOP|wxNB_NOPAGETHEME);
	
	//wxPanel *notebookPanel = new wxPanel(controlNotebook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	
	CsACHTControlWidget *acht = new CsACHTControlWidget(controlNotebook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL); 
	wxStaticText *ACTUATOR = new wxStaticText(controlNotebook, wxID_ANY, wxT("ACTUATOR"), wxDefaultPosition, wxDefaultSize);
	wxStaticText *ILLUMINATOR = new wxStaticText(controlNotebook, wxID_ANY, wxT("ILLUMINATOR"), wxDefaultPosition, wxDefaultSize);

	controlNotebook->AddPage(acht, wxT("ACHT"));
       	controlNotebook->AddPage(ACTUATOR, wxT("ACTUATOR"));
	controlNotebook->AddPage(ILLUMINATOR, wxT("ILLUMINATOR"));
	
	backgroundSizer->Add(controlNotebook, 0, wxEXPAND|wxALL, 5);
	SetSizer(backgroundSizer);
}

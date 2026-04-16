#include "csMainControlWidget.h"

CsMainControlWidget::CsMainControlWidget(wxWindow *parent, wxWindowID id, const wxPoint &pos, const wxSize &size, long style)
	: wxPanel(parent, id, pos, size, style)
{
	wxBoxSizer *backgroundSizer = new wxBoxSizer(wxVERTICAL);
	
	wxNotebook *controlNotebook = new wxNotebook(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxNB_TOP|wxNB_NOPAGETHEME);
	
	//wxBoxSizer *notebookSizer = new wxBoxSizer(wxVERTICAL);
	
	//wxPanel *backgroundPanel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	//notebookSizer->Add(backgroundPanel, 0, wxEXPAND|wxALL);

	CsACHTControlWidget *acht = new CsACHTControlWidget(controlNotebook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL); 
	wxStaticText *ACTUATOR = new wxStaticText(controlNotebook, wxID_ANY, wxT("ACTUATOR"), wxDefaultPosition, wxDefaultSize);
	wxStaticText *ILLUMINATOR = new wxStaticText(controlNotebook, wxID_ANY, wxT("ILLUMINATOR"), wxDefaultPosition, wxDefaultSize);

	controlNotebook->AddPage(acht, wxT("ACHT"));
       	controlNotebook->AddPage(ACTUATOR, wxT("ACTUATOR"));
	controlNotebook->AddPage(ILLUMINATOR, wxT("ILLUMINATOR"));
	
	backgroundSizer->Add(controlNotebook, 0, wxEXPAND|wxALL);
	SetSizer(backgroundSizer);
}

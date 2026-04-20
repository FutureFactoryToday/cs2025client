#include "csACHTControlWidget.h"

CsACHTControlWidget::CsACHTControlWidget(wxWindow *parent, wxWindowID id, const wxPoint &pos, const wxSize &size, long style)
	: wxPanel(parent, id, pos, size, style)
{
	wxBoxSizer *backgroundSizer = new wxBoxSizer(wxVERTICAL);
	
	CsTempDisplayWidget *tempDisplay = new CsTempDisplayWidget(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	CsACHTPowerUpWidget *acht = new CsACHTPowerUpWidget(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxStaticLine *spacer_1 = new wxStaticLine(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL);	
	CsFANPowerUpWidget *fan = new CsFANPowerUpWidget(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxStaticLine *spacer_2 = new wxStaticLine(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL);		
	CsTempModeWidget *temp = new CsTempModeWidget(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	
	backgroundSizer->Add(tempDisplay, 0, wxEXPAND|wxALL, 15);
	backgroundSizer->Add(acht, 0, wxEXPAND|wxALL, 15);
	backgroundSizer->Add(spacer_1, 0, wxEXPAND|wxRIGHT|wxLEFT, 5);
	backgroundSizer->Add(fan, 0, wxEXPAND|wxALL, 15);
	backgroundSizer->Add(spacer_2, 0, wxEXPAND|wxRIGHT|wxLEFT, 5);
	backgroundSizer->Add(temp, 0, wxEXPAND|wxALL, 15);
		
	this->SetSizer(backgroundSizer);
}

#include "csIllumControlWidget.h"

CsIllumControlWidget::CsIllumControlWidget(wxWindow *parent, wxWindowID id, const wxPoint &pos, const wxSize &size, long style)
	: wxPanel(parent, id, pos, size, style)
{
	wxBoxSizer *backgroundSizer = new wxBoxSizer(wxVERTICAL);

	wxStaticBoxSizer *nm800 = new wxStaticBoxSizer(wxHORIZONTAL, this, wxT("800 nm"));
	wxStaticBoxSizer *nm365 = new wxStaticBoxSizer(wxHORIZONTAL, this, wxT("365 nm"));
	wxStaticBoxSizer *visible = new wxStaticBoxSizer(wxHORIZONTAL, this, wxT("visible"));
	wxStaticLine *spacer_1 = new wxStaticLine(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL);	
	wxStaticLine *spacer_2 = new wxStaticLine(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL);		

	backgroundSizer->Add(nm800, 0, wxEXPAND|wxALL, 20);
	backgroundSizer->Add(spacer_1, 0, wxEXPAND|wxRIGHT|wxLEFT, 5);
	backgroundSizer->Add(nm365, 0, wxEXPAND|wxALL, 20);
	backgroundSizer->Add(spacer_2, 0, wxEXPAND|wxRIGHT|wxLEFT, 5);
	backgroundSizer->Add(visible, 0, wxEXPAND|wxALL, 20);

	CsACHTPowerUpWidget *acht = new CsACHTPowerUpWidget(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	CsFANPowerUpWidget *fan = new CsFANPowerUpWidget(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	CsTempModeWidget *temp = new CsTempModeWidget(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	
	nm800->Add(acht, 0, wxEXPAND|wxALL, 15);
	nm365->Add(fan, 0, wxEXPAND|wxALL, 15);
	visible->Add(temp, 0, wxEXPAND|wxALL, 15);
		
	this->SetSizer(backgroundSizer);
}

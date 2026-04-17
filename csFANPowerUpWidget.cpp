#include "csFANPowerUpWidget.h"

CsFANPowerUpWidget::CsFANPowerUpWidget(wxWindow *parent, wxWindowID id, const wxPoint &pos, const wxSize &size, long style)
	: wxPanel(parent, id, pos, size, style) 
{
	wxBoxSizer *backgroundSizer = new wxBoxSizer(wxHORIZONTAL);

	this->SetSizer(backgroundSizer);

	wxButton *fanOn = new wxButton(this, wxID_ANY, wxT("On"), wxDefaultPosition, wxDefaultSize);
	wxButton *fanOff = new wxButton(this, wxID_ANY, wxT("Off"), wxDefaultPosition, wxDefaultSize);
	fanOff->Disable();
	wxStaticText *fanLabel = new wxStaticText(this, wxID_ANY, wxT("Enable FAN"), wxDefaultPosition, wxDefaultSize);

	backgroundSizer->Add(fanOn, 0, wxALL, 10);
	backgroundSizer->AddSpacer(15);
	backgroundSizer->Add(fanOff, 0, wxALL, 10);
	backgroundSizer->AddSpacer(15);
	backgroundSizer->Add(fanLabel, 0, wxALIGN_CENTRE_VERTICAL, 10);
}


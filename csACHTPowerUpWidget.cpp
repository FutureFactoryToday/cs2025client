#include "csACHTPowerUpWidget.h"

CsACHTPowerUpWidget::CsACHTPowerUpWidget(wxWindow *parent, wxWindowID id, const wxPoint &pos, const wxSize &size, long style)
	: wxPanel(parent, id, pos, size, style) 
{
	wxBoxSizer *backgroundSizer = new wxBoxSizer(wxHORIZONTAL);

	SetSizer(backgroundSizer);

	wxButton *achtOn = new wxButton(this, wxID_ANY, wxT("On"), wxDefaultPosition, wxDefaultSize);
	wxButton *achtOff = new wxButton(this, wxID_ANY, wxT("Off"), wxDefaultPosition, wxDefaultSize);
	achtOff->Disable();
	wxStaticText *achtLabel = new wxStaticText(this, wxID_ANY, wxT("Enable the ACHT control unit"), wxDefaultPosition, wxDefaultSize);

	backgroundSizer->Add(achtOn, 0, wxALL, 10);
	backgroundSizer->AddSpacer(15);
	backgroundSizer->Add(achtOff, 0, wxALL, 10);
	backgroundSizer->AddSpacer(15);
	backgroundSizer->Add(achtLabel, 0, wxALIGN_CENTRE_VERTICAL, 10);
}


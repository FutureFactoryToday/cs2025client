#include "csTempModeWidget.h"

CsTempModeWidget::CsTempModeWidget(wxWindow *parent, wxWindowID id, const wxPoint &pos, const wxSize &size, long style)
	: wxPanel(parent, id, pos, size, style) 
{
	wxBoxSizer *backgroundSizer = new wxBoxSizer(wxHORIZONTAL);

	SetSizer(backgroundSizer);

	wxTextCtrl *deltaTempInput = new wxTextCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDefaultSize, wxTE_RIGHT);
	wxButton *achtOnOff = new wxButton(this, wxID_ANY, wxT("Set"), wxDefaultPosition, wxDefaultSize);
	achtOnOff->Disable();
	wxStaticText *achtLabel = new wxStaticText(this, wxID_ANY, wxT("Set temperature delta"), wxDefaultPosition, wxDefaultSize);

	backgroundSizer->Add(deltaTempInput, 0, wxALL, 10);
	backgroundSizer->AddSpacer(15);
	backgroundSizer->Add(achtOnOff, 0, wxALL, 10);
	backgroundSizer->AddSpacer(15);
	backgroundSizer->Add(achtLabel, 0, wxALIGN_CENTRE_VERTICAL, 10);
}


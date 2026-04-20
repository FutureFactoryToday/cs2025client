#include "csTempDisplayWidget.h"

CsTempDisplayWidget::CsTempDisplayWidget(wxWindow *parent, wxWindowID id, const wxPoint &pos, const wxSize &size, long style)
	: wxPanel(parent, id, pos, size, style) 
{
	wxBoxSizer *backgroundSizer = new wxBoxSizer(wxHORIZONTAL);

	SetSizer(backgroundSizer);

	wxStaticText *currentDeltaTempLabel = new wxStaticText(this, wxID_ANY, wxT("Current delta temperature"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT);
	wxTextCtrl *currentDeltaTemp = new wxTextCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDefaultSize, wxTE_RIGHT|wxTE_READONLY);

	backgroundSizer->Add(0,0,1,wxEXPAND, 10);
	backgroundSizer->Add(currentDeltaTempLabel, 0, wxALIGN_CENTRE_VERTICAL, 10);
	backgroundSizer->AddSpacer(15);
	backgroundSizer->Add(currentDeltaTemp, 0, wxALL, 10);
	backgroundSizer->AddSpacer(15);
	//backgroundSizer->Add(achtLabel, 0, wxALIGN_CENTRE_VERTICAL, 10);
}


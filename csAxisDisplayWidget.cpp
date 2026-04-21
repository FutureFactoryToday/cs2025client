#include "csAxisDisplayWidget.h"

CsAxisDisplayWidget::CsAxisDisplayWidget(wxWindow *parent, wxWindowID id, const wxPoint &pos, const wxSize &size, long style)
	: wxPanel(parent, id, pos, size, style) 
{
	wxBoxSizer *backgroundSizer = new wxBoxSizer(wxHORIZONTAL);

	SetSizer(backgroundSizer);

	wxStaticText *referenceHomeLabel = new wxStaticText(this, wxID_ANY, wxT("Active axis control"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT);
	wxButton *refHome = new wxButton(this, wxID_ANY, wxT("Refecence home"), wxDefaultPosition, wxDefaultSize);
	wxComboBox *mode = new wxComboBox(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, 0, wxCB_READONLY);
	mode->Append("MODE 1");
	mode->Append("MODE 2");
	mode->Append("MODE 3");
	mode->Disable();
	wxButton *setMode = new wxButton(this, wxID_ANY, wxT("Go"), wxDefaultPosition, wxDefaultSize);
	setMode->Disable();
	setMode->SetToolTip(wxT("Please, initialize the axis"));
	wxStaticText *activeModeLabel = new wxStaticText(this, wxID_ANY, wxT("Active mode"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT);
	wxTextCtrl *currentPosition = new wxTextCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDefaultSize, wxTE_RIGHT|wxTE_READONLY);

	backgroundSizer->Add(0,0,1,wxEXPAND, 10);
	backgroundSizer->Add(referenceHomeLabel, 0, wxALIGN_CENTRE_VERTICAL, 10);
	backgroundSizer->AddSpacer(25);
	backgroundSizer->Add(refHome, 0, wxALIGN_CENTRE_VERTICAL, 10);
	backgroundSizer->AddSpacer(25);
	backgroundSizer->Add(mode, 0, wxALIGN_CENTRE_VERTICAL, 10);
	backgroundSizer->AddSpacer(15);
	backgroundSizer->Add(setMode, 0, wxALL, 10);
	backgroundSizer->AddSpacer(15);
	backgroundSizer->Add(activeModeLabel, 0, wxALIGN_CENTRE_VERTICAL, 10);
	backgroundSizer->AddSpacer(15);
	backgroundSizer->Add(currentPosition, 0, wxALIGN_CENTRE_VERTICAL, 10);
	backgroundSizer->AddSpacer(15);
	//backgroundSizer->Add(achtLabel, 0, wxALIGN_CENTRE_VERTICAL, 20);
}


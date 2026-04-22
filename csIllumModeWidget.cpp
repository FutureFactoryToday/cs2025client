#include "csIllumModeWidget.h"

CsIllumModeWidget::CsIllumModeWidget(wxWindow *parent, wxWindowID id, const wxPoint &pos, const wxSize &size, long style)
	: wxPanel(parent, id, pos, size, style) 
{
	wxBoxSizer *backgroundSizer = new wxBoxSizer(wxHORIZONTAL);

	SetSizer(backgroundSizer);

	brightnessPowerUp = new wxCheckBox(this, wxID_ANY, wxT("Power Up"), wxDefaultPosition, wxDefaultSize, 0);
	brightnessInput = new wxTextCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDefaultSize, wxTE_RIGHT);
	brightnessInput->Disable();
	brightnessSet = new wxButton(this, wxID_ANY, wxT("Set"), wxDefaultPosition, wxDefaultSize);
	brightnessSet->Disable();
	wxStaticText *brightnessLabel = new wxStaticText(this, wxID_ANY, wxT("Set brightness in lumens"), wxDefaultPosition, wxDefaultSize);

	backgroundSizer->Add(brightnessPowerUp, 0, wxEXPAND|wxALL, 15);
	backgroundSizer->Add(brightnessInput, 0, wxALL, 10);
	backgroundSizer->AddSpacer(15);
	backgroundSizer->Add(brightnessSet, 0, wxALL, 10);
	backgroundSizer->AddSpacer(15);
	backgroundSizer->Add(brightnessLabel, 0, wxALIGN_CENTRE_VERTICAL, 10);

	brightnessPowerUp->Bind(wxEVT_CHECKBOX, &CsIllumModeWidget::OnCheckBoxSet, this);
}

void CsIllumModeWidget::OnCheckBoxSet(wxCommandEvent &event)
{
	if(event.IsChecked()) 
	{
		brightnessInput->Enable();
		brightnessSet->Enable();
	}
	else
	{
		brightnessInput->Disable();
		brightnessSet->Disable();
		brightnessInput->Clear();
	}
}


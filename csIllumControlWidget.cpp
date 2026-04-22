#include "csIllumControlWidget.h"

CsIllumControlWidget::CsIllumControlWidget(wxWindow *parent, wxWindowID id, const wxPoint &pos, const wxSize &size, long style)
	: wxPanel(parent, id, pos, size, style)
{
	wxBoxSizer *backgroundSizer = new wxBoxSizer(wxVERTICAL);

	wxStaticBoxSizer *nm800Sizer = new wxStaticBoxSizer(wxHORIZONTAL, this, wxT("800 nm"));
	wxStaticBoxSizer *nm365Sizer = new wxStaticBoxSizer(wxHORIZONTAL, this, wxT("365 nm"));
	wxStaticBoxSizer *visibleSizer = new wxStaticBoxSizer(wxHORIZONTAL, this, wxT("visible"));
	wxStaticLine *spacer_1 = new wxStaticLine(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL);	
	wxStaticLine *spacer_2 = new wxStaticLine(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL);		

	backgroundSizer->Add(nm800Sizer, 0, wxEXPAND|wxALL, 20);
	backgroundSizer->Add(spacer_1, 0, wxEXPAND|wxRIGHT|wxLEFT, 5);
	backgroundSizer->Add(nm365Sizer, 0, wxEXPAND|wxALL, 20);
	backgroundSizer->Add(spacer_2, 0, wxEXPAND|wxRIGHT|wxLEFT, 5);
	backgroundSizer->Add(visibleSizer, 0, wxEXPAND|wxALL, 20);

	CsIllumModeWidget *nm800ControlPanel = new CsIllumModeWidget(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	CsIllumModeWidget *nm365ControlPanel = new CsIllumModeWidget(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	CsIllumModeWidget *visibleControlPanel = new CsIllumModeWidget(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	
	nm800Sizer->Add(nm800ControlPanel, 0, wxEXPAND|wxALL, 15);
	nm365Sizer->Add(nm365ControlPanel, 0, wxEXPAND|wxALL, 15);
	visibleSizer->Add(visibleControlPanel, 0, wxEXPAND|wxALL, 15);
		
	this->SetSizer(backgroundSizer);
}

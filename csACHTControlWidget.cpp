#include "csACHTControlWidget.h"

CsACHTControlWidget::CsACHTControlWidget(wxWindow *parent, wxWindowID id, const wxPoint &pos, const wxSize &size, long style)
	: wxPanel(parent, id, pos, size, style)
{
	wxBoxSizer *backgroundSizer = new wxBoxSizer(wxHORIZONTAL);
	
	wxButton *enableAcht = new wxButton(this, wxID_ANY, wxT("POWER ON"), wxDefaultPosition, wxDefaultSize, 0);
	backgroundSizer->Add(enableAcht, 0, wxEXPAND|wxALL, 15);

	wxButton *disableAcht = new wxButton(this, wxID_ANY, wxT("POWER OFF"), wxDefaultPosition, wxDefaultSize, 0);
	backgroundSizer->Add(disableAcht, 0, wxEXPAND|wxALL, 15);

	this->SetSizer(backgroundSizer);
}

#include "csAxisControlWidget.h"

CsAxisControlWidget::CsAxisControlWidget(wxWindow *parent, wxWindowID id, const wxPoint &pos, const wxSize &size, long style)
	: wxPanel(parent, id, pos, size, style)
{
	wxBoxSizer *backgroundSizer = new wxBoxSizer(wxVERTICAL);
	
	CsAxisDisplayWidget *axisDisplay = new CsAxisDisplayWidget(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	
	backgroundSizer->Add(axisDisplay, 0, wxEXPAND|wxALL, 15);
		
	this->SetSizer(backgroundSizer);
}

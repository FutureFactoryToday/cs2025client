#include "csConnectWidget.h"

CsConnectWidget::CsConnectWidget(wxWindow *parent, wxWindowID id, const wxPoint &pos, const wxSize &size, long style)
	: wxPanel(parent, id, pos, size, style)
{
	wxBoxSizer *backgroundSizer = new wxBoxSizer(wxHORIZONTAL);
	SetSizer(backgroundSizer);

	wxStaticText *portLabel = new wxStaticText(this, wxID_ANY, wxT("Please, select the port..."), wxDefaultPosition, wxDefaultSize, wxTE_CENTER);
	portSelector = new wxComboBox(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDefaultSize, 0, 0, wxCB_READONLY, wxDefaultValidator);
	portSelector->Append("USB");

	startOfExchange = new wxButton(this, wxID_ANY, wxT("Start Exchange"), wxDefaultPosition, wxDefaultSize, 0);
	endOfExchange = new wxButton(this, wxID_ANY, wxT("End Exchange"), wxDefaultPosition, wxDefaultSize, 0);
	endOfExchange->Disable();
	saveExchange = new wxButton(this, wxID_ANY, wxT("Save Exchange"), wxDefaultPosition, wxDefaultSize, 0);
	saveExchange->Disable();

	backgroundSizer->Add(portLabel, 0, wxALIGN_CENTER_VERTICAL|wxLEFT, 5);
	backgroundSizer->Add(portSelector, 0, wxALL, 5);
	backgroundSizer->Add(startOfExchange, 0, wxALL, 5);
	backgroundSizer->Add(endOfExchange, 0, wxALL, 5);
	backgroundSizer->Add(saveExchange, 0, wxALL, 5);
}

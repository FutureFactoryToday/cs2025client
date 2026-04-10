#include "csMainFrame.h"

CsMainFrame::CsMainFrame(wxFrame *frame, const wxString &title)
	: wxFrame(frame, wxID_ANY,title)
{
	SetClientSize(wxSize(600,600));

	wxBoxSizer *backgroundSizer = new wxBoxSizer(wxVERTICAL);
	wxPanel *backgroundPanel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	backgroundSizer->Add(backgroundPanel, 0, wxEXPAND|wxALL);

	wxBoxSizer *topSizer = new wxBoxSizer(wxVERTICAL);
	backgroundPanel->SetSizer(topSizer);

	CsConnectWidget *connectWidget = new CsConnectWidget(backgroundPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	//connectWidget->SetBackgroundColour(wxColour(200,0,0));
	topSizer->Add(connectWidget, 0, wxEXPAND|wxALL);

	wxPanel *panel = new wxPanel(backgroundPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	panel->SetBackgroundColour(wxColour(0,200,0));
	topSizer->Add(panel, 2, wxEXPAND|wxALL);

	wxStatusBar *statusBar = new wxStatusBar(this, wxID_ANY, wxSTB_DEFAULT_STYLE);
	SetStatusBar(statusBar);
}

void CsMainFrame::OnClose(wxCloseEvent &event)
{
	Destroy();
}

void CsMainFrame::OnQuit(wxCommandEvent &event)
{
	Destroy();
}

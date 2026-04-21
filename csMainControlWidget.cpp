#include "csMainControlWidget.h"

CsMainControlWidget::CsMainControlWidget(wxWindow *parent, wxWindowID id, const wxPoint &pos, const wxSize &size, long style)
	: wxPanel(parent, id, pos, size, style)
{
	wxBoxSizer *backgroundSizer = new wxBoxSizer(wxVERTICAL);
	
	wxNotebook *controlNotebook = new wxNotebook(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxNB_TOP|wxNB_NOPAGETHEME);
	
	this->Bind(wxEVT_NOTEBOOK_PAGE_CHANGED, &CsMainControlWidget::OnNotePageSizeChanged, this);
	//wxPanel *notebookPanel = new wxPanel(controlNotebook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	
	CsACHTControlWidget *acht = new CsACHTControlWidget(controlNotebook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL); 
	CsAxisControlWidget *axis = new CsAxisControlWidget(controlNotebook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL); 
	CsIllumControlWidget *illum = new CsIllumControlWidget(controlNotebook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL); 
	
	controlNotebook->AddPage(acht, wxT("ACHT"));
       	controlNotebook->AddPage(axis, wxT("ACTUATOR"));
	controlNotebook->AddPage(illum, wxT("ILLUMINATOR"));
	
	backgroundSizer->Add(controlNotebook, 0, wxEXPAND|wxALL, 5);
	SetSizer(backgroundSizer);
}


void CsMainControlWidget::OnNotePageSizeChanged(wxBookCtrlEvent &event)
{
	event.Skip();
	
	CallAfter([this]() 
			{
				int sel = controlNotebook->GetSelection();
				if(sel == wxNOT_FOUND) return;
				wxWindow *page = controlNotebook->GetPage(sel);
				if(!page) return;
				wxSize bestSize =page->GetBestSize();
				controlNotebook->SetMinSize(bestSize);
				this->Layout();
				this->Fit();
			});

}

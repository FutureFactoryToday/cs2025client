#ifndef CSMAINFRAME_H
#define CSMAINFRAME_H

#include <wx/wx.h>
#include "csConnectWidget.h"

class CsMainFrame : public wxFrame
{
public:
	CsMainFrame(wxFrame *frame, const wxString &title);
	~CsMainFrame(){};
private:
	void OnClose(wxCloseEvent &event);
	void OnQuit(wxCommandEvent &event);
};

#endif // CSMAINFRAME_H

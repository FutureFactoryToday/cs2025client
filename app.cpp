#include <wx/wx.h>
#include "csMainFrame.h"

class CSapp : public wxApp {
public:
	virtual bool OnInit() {
		CsMainFrame *mainFrame = new CsMainFrame(NULL, "CS25 Client");
		mainFrame->Show(true);
		return true;
	}
};

wxIMPLEMENT_APP(CSapp);

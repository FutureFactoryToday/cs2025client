#include <wx/wx.h>

class CSapp : public wxApp {
public:
	virtual bool OnInit() {
		wxFrame *mainFrame = new wxFrame(NULL, wxID_ANY, "CS25 Client");
		mainFrame->Show(true);
		return true;
	}
};

wxIMPLEMENT_APP(CSapp);

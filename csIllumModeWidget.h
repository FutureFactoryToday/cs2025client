#ifndef CSILLUMMODEWIDGET_H
#define CSILLUMMODEWIDGET_H

#include <wx/wx.h>

class CsIllumModeWidget : public wxPanel
{
public:
	CsIllumModeWidget(wxWindow *parent, wxWindowID id, const wxPoint &pos, const wxSize &size, long style);
	~CsIllumModeWidget(){};
private:
	wxCheckBox *brightnessPowerUp;
	wxTextCtrl *brightnessInput;
	wxButton *brightnessSet;

	void OnCheckBoxSet(wxCommandEvent &event);
};
#endif // CSILLUMMODEWIDGET_H

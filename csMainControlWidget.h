#ifndef CSMAINCONTROLWIDGET_H
#define CSMAINCONTROLWIDGET_H

#include <wx/wx.h>

class CsMainControlWidget : public wxPanel
{
public:
	CsMainControlWidget(wxWindow *parent, wxWindowID id, const wxPoint &pos, const wxSize &size, long style);
	~CsMainControlWidget(){};
};

#endif // CSMAINCONTROLWIDGET_H


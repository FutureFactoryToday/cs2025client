#ifndef CSTEMPMODEWIDGET_H
#define CSTEMPMODEWIDGET_H

#include <wx/wx.h>

class CsTempModeWidget : public wxPanel
{
public:
	CsTempModeWidget(wxWindow *parent, wxWindowID id, const wxPoint &pos, const wxSize &size, long style);
	~CsTempModeWidget(){};
};
#endif // CSTEMPMODEWIDGET_H

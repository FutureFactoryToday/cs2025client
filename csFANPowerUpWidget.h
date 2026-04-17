#ifndef CSFANPOWERUPWIDGET_H
#define CSFANPOWERUPWIDGET_H

#include <wx/wx.h>

class CsFANPowerUpWidget : public wxPanel
{
public:
	CsFANPowerUpWidget(wxWindow *parent, wxWindowID id, const wxPoint &pos, const wxSize &size, long style);
	~CsFANPowerUpWidget(){};
};

#endif // CSFANPOWERUPWIDGET_H

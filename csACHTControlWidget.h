#ifndef CSACHTCONTROLWIDGET_H
#define CSACHTCONTROLWIDGET_H

#include <wx/wx.h>
#include <wx/statline.h>
#include "csACHTPowerUpWidget.h"
#include "csFANPowerUpWidget.h"

class CsACHTControlWidget : public wxPanel
{
public:
	CsACHTControlWidget(wxWindow *parent, wxWindowID id, const wxPoint &pos, const wxSize &size, long slyle);
	~CsACHTControlWidget(){};
};
#endif // CSACHTCONTROLWIDGET_H

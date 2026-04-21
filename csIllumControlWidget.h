#ifndef CSILLUMCONTROLWIDGET_H
#define CSILLUMCONTROLWIDGET_H

#include <wx/wx.h>
#include <wx/statline.h>
#include "csACHTPowerUpWidget.h"
#include "csFANPowerUpWidget.h"
#include "csTempModeWidget.h"


class CsIllumControlWidget : public wxPanel
{
public:
	CsIllumControlWidget(wxWindow *parent, wxWindowID id, const wxPoint &pos, const wxSize &size, long slyle);
	~CsIllumControlWidget(){};
};
#endif // CSACHTCONTROLWIDGET_H

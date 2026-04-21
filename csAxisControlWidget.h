#ifndef CSAXISCONTROLWIDGET_H
#define CSAXISCONTROLWIDGET_H

#include <wx/wx.h>
#include <wx/statline.h>
#include "csAxisDisplayWidget.h"

class CsAxisControlWidget : public wxPanel
{
public:
	CsAxisControlWidget(wxWindow *parent, wxWindowID id, const wxPoint &pos, const wxSize &size, long slyle);
	~CsAxisControlWidget(){};
};
#endif // CSAXISCONTROLWIDGET_H

#ifndef CSTEMPDISPLAYWIDGET_H
#define CSTEMPDISPLAYWIDGET_H

#include <wx/wx.h>

class CsTempDisplayWidget : public wxPanel
{
public:
	CsTempDisplayWidget(wxWindow *parent, wxWindowID id, const wxPoint &pos, const wxSize &size, long style);
	~CsTempDisplayWidget(){};
};
#endif // CSTEMPDISPLAYWIDGET_H

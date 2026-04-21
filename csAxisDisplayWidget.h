#ifndef CSAXISDISPLAYWIDGET_H
#define CSAXISDISPLAYWIDGET_H

#include <wx/wx.h>

class CsAxisDisplayWidget : public wxPanel
{
public:
	CsAxisDisplayWidget(wxWindow *parent, wxWindowID id, const wxPoint &pos, const wxSize &size, long style);
	~CsAxisDisplayWidget(){};
};
#endif // CSAXISDISPLAYWIDGET_H

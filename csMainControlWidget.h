#ifndef CSMAINCONTROLWIDGET_H
#define CSMAINCONTROLWIDGET_H

#include <wx/wx.h>
#include <wx/notebook.h>
#include "csACHTControlWidget.h"
#include "csAxisControlWidget.h"
#include "csIllumControlWidget.h"
class CsMainControlWidget : public wxPanel
{
public:
	CsMainControlWidget(wxWindow *parent, wxWindowID id, const wxPoint &pos, const wxSize &size, long style);
	~CsMainControlWidget(){};
private:

	wxNotebook *controlNotebook;
	
	void OnNotePageSizeChanged(wxBookCtrlEvent &event);
};

#endif // CSMAINCONTROLWIDGET_H


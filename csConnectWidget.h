#ifndef CSCONNECTWIDGET_H
#define CSCONNECTWIDGET_H

#include <wx/wx.h>

class CsConnectWidget : public wxPanel
{
public:
	CsConnectWidget(wxWindow *parent, wxWindowID id, const wxPoint &pos, const wxSize &size, long style);
	~CsConnectWidget(){};
private:
	wxComboBox *portSelector;
	wxButton *startOfExchange;
	wxButton *endOfExchange;
	wxButton *saveExchange;
	wxTimer *timer;

	void OnStartOfExchangeButtonClick(wxCommandEvent &event);
	void OnEndOfExchangeButtonClick(wxCommandEvent &event);
	void OnSaveExchangeButtonClick(wxCommandEvent &event);
};

#endif // CSCONNECTWIDGET_H

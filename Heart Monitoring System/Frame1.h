#ifndef FRAME1_H
#define FRAME1_H

#include "databaseConnection.h"
#include <wx/wx.h>

class Frame1 : public wxFrame {
	public:
		Frame1(const wxString& title);
		
	private:
		// Get database connection instance
		DatabaseConnection dbConnection;
		PGconn* conn = dbConnection.getConnection();

		wxStaticText* titleText;
		wxStaticText* selectOneText;

		wxButton* inputManuallyButton;
		wxButton* autoGeneratedButton;
		wxButton* displayButton;

		void drawRectangle(wxPaintEvent& event);
		void inputManuallyButtonClicked(wxCommandEvent& event);
		void autoGeneratedButtonClicked(wxCommandEvent& event);
		void displayButtonClicked(wxCommandEvent& event);
};

#endif
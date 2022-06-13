#pragma once

#include "wx/wx.h"

class Calculator : public wxFrame //inherit wxFrame form (a wimdow in wxWidget) so the window/frame to show
{
public:
	Calculator();

	~Calculator();

private:
	// Window Components 
	// Add a Text Box a the top to the window 
	wxTextCtrl* text1 = nullptr;

	// Add buttons to the window 
	// 3rd row buttons
	wxButton* hexbtn = nullptr;

	// 4th row buttons
	wxButton* decbtn = nullptr;
	wxButton* button1 = nullptr;
	wxButton* button2 = nullptr;
	wxButton* button3 = nullptr;
	wxButton* Addbtn = nullptr;
};

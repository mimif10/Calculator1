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
	wxButton* button4 = nullptr;
	wxButton* button5 = nullptr;
	wxButton* button6 = nullptr;
	wxButton* SubstractBtn = nullptr;

	// 4th row buttons
	wxButton* decbtn = nullptr;
	wxButton* button1 = nullptr;
	wxButton* button2 = nullptr;
	wxButton* button3 = nullptr;
	wxButton* AddBtn = nullptr;
};

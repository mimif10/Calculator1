#pragma once

#include "wx/wx.h"

class Calculator : public wxFrame //inherit wxFrame form (a wimdow in wxWidget) so the window/frame to show
{
public:
	Calculator();

	~Calculator();

private:
	// Window Components 
	// Add buttons to the window 
	wxButton* button1 = nullptr;
	wxButton* button2 = nullptr;

};

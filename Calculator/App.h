#pragma once

#include "wx/wx.h" 
#include "Calculator.h"

class App : public wxApp //inherit wxWidgets App type framework from base class 
{
public:
	App();

	~App();

private: // private variable for the frame
	Calculator* windowFrame = nullptr; // tells the wxApp/Launcher to display the window

public:
	virtual bool OnInit(); // to be able to inherit from wxApp

};

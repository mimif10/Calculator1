#pragma once

#include "wx/wx.h"

class Calculator : public wxFrame //inherit wxFrame form (a wimdow in wxWidget) so the window/frame to show
{
public:
	Calculator();

	~Calculator();

	// All events that are not customed have a type: wxCommand Event (do something event)
	// wxCommand Event - function that takes wxCommand Event as an argument
	// button Click event - function that handles the button
	void OnButtonClicked(wxCommandEvent& event); 

	// wxWidgets provides tools to handle events for us: 
	// include the macro declare event table below
	wxDECLARE_EVENT_TABLE(); // implement at the top of .cpp file 

private:
	// Window Components 
	// Add a Text Box a the top to the window 
	wxTextCtrl* text1 = nullptr;

	// Add buttons to the window 
	// 1st row buttons
	wxButton* clearBtn = nullptr;
	wxButton* negBtn = nullptr;
	wxButton* modBtn = nullptr;
	wxButton* equalBtn = nullptr;
	wxButton* divideBtn = nullptr;

	// 2nd row buttons
	wxButton* binBtn = nullptr;
	wxButton* button7 = nullptr;
	wxButton* button8 = nullptr;
	wxButton* button9 = nullptr;
	wxButton* mutliplyBtn = nullptr;

	// 3rd row buttons
	wxButton* hexBtn = nullptr;
	wxButton* button4 = nullptr;
	wxButton* button5 = nullptr;
	wxButton* button6 = nullptr;
	wxButton* substractBtn = nullptr;

	// 4th row buttons
	wxButton* decBtn = nullptr;
	wxButton* button1 = nullptr;
	wxButton* button2 = nullptr;
	wxButton* button3 = nullptr;
	wxButton* addBtn = nullptr;
};

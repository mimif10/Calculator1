#include "Calculator.h"

// Window Frame requires some information in order to initialize it (parameters: parent, ID, name, location point, size)
Calculator::Calculator() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(200, 200), wxSize(350, 500))
{
	// create a button at the top of the window (parameters: parent (wxFrame), ID, title, starting point, starting size
	text1 = new wxTextCtrl(this, 100, "", wxPoint(10, 10), wxSize(300, 40));

	// create a button from Calculator.h (parameters: parent (wxFrame), ID, title, starting point, starting size
	
	// 2nd row buttons
	binBtn = new wxButton(this, 400, "bin", wxPoint(30, 150), wxSize(50, 50));
	button7 = new wxButton(this, 7, "7", wxPoint(80, 150), wxSize(50, 50));

	// 3rd row buttons
	hexBtn = new wxButton(this, 400, "hex", wxPoint(30, 200), wxSize(50, 50));
	button4 = new wxButton(this, 4, "4", wxPoint(80, 200), wxSize(50, 50));
	button5 = new wxButton(this, 5, "5", wxPoint(130, 200), wxSize(50, 50));
	button6 = new wxButton(this, 6, "6", wxPoint(180, 200), wxSize(50, 50));
	SubstractBtn = new wxButton(this, 700, "-", wxPoint(230, 200), wxSize(50, 50));

	// 4th row buttons
	decBtn = new wxButton(this, 500, "dec", wxPoint(30, 250), wxSize(50, 50));
	button1 = new wxButton(this, 1, "1", wxPoint(80, 250), wxSize(50, 50));
	button2 = new wxButton(this, 2, "2", wxPoint(130, 250), wxSize(50, 50));
	button3 = new wxButton(this, 3, "3", wxPoint(180, 250), wxSize(50, 50));
	AddBtn = new wxButton(this, 600, "+", wxPoint(230, 250), wxSize(50, 50));
}

Calculator::~Calculator()
{
}
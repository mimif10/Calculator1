#include "Calculator.h"

// Window Frame requires some information in order to initialize it (parameters: parent, ID, name, location point, size)
Calculator::Calculator() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(200, 200), wxSize(350, 500))
{
	// create a button at the top of the window (parameters: parent (wxFrame), ID, title, starting point, starting size
	text1 = new wxTextCtrl(this, 100, "", wxPoint(10, 10), wxSize(300, 40));

	// create a button from Calculator.h (parameters: parent (wxFrame), ID, title, starting point, starting size
	decbtn = new wxButton(this, 500, "dec", wxPoint(30, 200), wxSize(50, 50));
	button1 = new wxButton(this, 1, "1", wxPoint(80,200), wxSize(50, 50));
	button2 = new wxButton(this, 2, "2", wxPoint(130,200), wxSize(50, 50));
}

Calculator::~Calculator()
{
}

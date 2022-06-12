#include "Calculator.h"

// Window Frame requires some information in order to initialize it (parameters: parent, ID, name, location point, size)
Calculator::Calculator() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(200, 200), wxSize(350, 500))
{
	// create a button fromn Calculator.h (parameters: parent (wxFrame), ID, title, starting point, starting size
	button1 = new wxButton(this, 100, "1", wxPoint(10, 10), wxSize(50, 50));
	button2 = new wxButton(this, 101, "+", wxPoint(70, 10), wxSize(50, 50));
}

Calculator::~Calculator()
{
}

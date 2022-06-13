#include "Calculator.h"

// implement Event Table (begin and end)
wxBEGIN_EVENT_TABLE(Calculator, wxFrame) // takes name of the class for the event and the base class)
	// Declare the event button  macroe event button - takes in the first button's windows ID, 
	EVT_BUTTON(100, OnButtonClicked) // and link each button eith the ID being clicked to the function we want to call 
	EVT_BUTTON(200, OnButtonClicked)
	EVT_BUTTON(300, OnButtonClicked)
	EVT_BUTTON(400, OnButtonClicked)
	EVT_BUTTON(500, OnButtonClicked)
	EVT_BUTTON(600, OnButtonClicked)
	EVT_BUTTON(700, OnButtonClicked)
	EVT_BUTTON(800, OnButtonClicked)
	EVT_BUTTON(900, OnButtonClicked)
	EVT_BUTTON(1000, OnButtonClicked)
	EVT_BUTTON(1100, OnButtonClicked)
	EVT_BUTTON(1200, OnButtonClicked)
	EVT_BUTTON(1, OnButtonClicked)
	EVT_BUTTON(2, OnButtonClicked)
	EVT_BUTTON(2, OnButtonClicked)
	EVT_BUTTON(4, OnButtonClicked)
	EVT_BUTTON(5, OnButtonClicked)
	EVT_BUTTON(6, OnButtonClicked)
	EVT_BUTTON(7, OnButtonClicked)
	EVT_BUTTON(8, OnButtonClicked)
	EVT_BUTTON(9, OnButtonClicked)
	wxEND_EVENT_TABLE()

// Window Frame requires some information in order to initialize it (parameters: parent, ID, name, location point, size)
Calculator::Calculator() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(720, 250), wxSize(320, 315))
{
	// create a textbox at the top of the window (parameters: parent (wxFrame), ID, title, starting point, starting size
	text1 = new wxTextCtrl(this, 100, "", wxPoint(30, 26), wxSize(250, 24));

	// create a button from Calculator.h (parameters: parent (wxFrame), ID, title, starting point, starting size
	// 1st row buttons
	clearBtn = new wxButton(this, 200, "clear", wxPoint(30, 50), wxSize(50, 50));
	negBtn = new wxButton(this, 1200, "(-)", wxPoint(80, 50), wxSize(50, 50));
	modBtn = new wxButton(this, 1100, "mod", wxPoint(130, 50), wxSize(50, 50));
	equalBtn = new wxButton(this, 1000, "=", wxPoint(180, 50), wxSize(50, 50));
	divideBtn = new wxButton(this, 900, "/", wxPoint(230, 50), wxSize(50, 50));

	// 2nd row buttons
	binBtn = new wxButton(this, 300, "bin", wxPoint(30, 100), wxSize(50, 50));
	button7 = new wxButton(this, 7, "7", wxPoint(80, 100), wxSize(50, 50));
	button8 = new wxButton(this, 8, "8", wxPoint(130, 100), wxSize(50, 50));
	button9 = new wxButton(this, 9, "9", wxPoint(180, 100), wxSize(50, 50));
	mutliplyBtn = new wxButton(this, 400, "*", wxPoint(230, 100), wxSize(50, 50));

	// 3rd row buttons
	hexBtn = new wxButton(this, 400, "hex", wxPoint(30, 150), wxSize(50, 50));
	button4 = new wxButton(this, 4, "4", wxPoint(80, 150), wxSize(50, 50));
	button5 = new wxButton(this, 5, "5", wxPoint(130, 150), wxSize(50, 50));
	button6 = new wxButton(this, 6, "6", wxPoint(180, 150), wxSize(50, 50));
	substractBtn = new wxButton(this, 700, "-", wxPoint(230, 150), wxSize(50, 50));

	// 4th row buttons
	decBtn = new wxButton(this, 500, "dec", wxPoint(30, 200), wxSize(50, 50));
	button1 = new wxButton(this, 1, "1", wxPoint(80, 200), wxSize(50, 50));
	button2 = new wxButton(this, 2, "2", wxPoint(130, 200), wxSize(50, 50));
	button3 = new wxButton(this, 3, "3", wxPoint(180, 200), wxSize(50, 50));
	addBtn = new wxButton(this, 600, "+", wxPoint(230, 200), wxSize(50, 50));
}

Calculator::~Calculator()
{
}

// button Click event - function that handles the button 
void Calculator::OnButtonClicked(wxCommandEvent& event) 
{

}


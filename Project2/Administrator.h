#ifndef ADMINISTRATOR_H
#define  ADMINISTRATOR_H
#include "SalariedEmployee.h"
#include <iostream>
#include <string>
using namespace std;

class Administrator : public SalariedEmployee {
public:
	Administrator();
	Administrator(const string& name, const string& ssn, const double& salary, string title, string area, string supervisor);

	string getTitle();
	string getArea();
	string getSupervisor();
	void setTitle(string newTitle);
	void setArea(string newArea);
	void setSupervisor(string newSupervisor);
	void enterData();
	void printData();
	void printCheck();

	~Administrator();

private:
	string title;
	string area;
	string supervisor;
};


#endif
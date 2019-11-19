#include <iostream>
#include <string>
using namespace std;
#include "Administrator.h"

Administrator::Administrator() : SalariedEmployee(), title("Undefined"), area ("Undefined"), supervisor("Undifined") {}
Administrator::Administrator(const string& name, const string& ssn, const double& salary, string title, string area, string supervisor)
	: SalariedEmployee(name, ssn, salary),
	title(title), area(area), supervisor(supervisor) {}
Administrator::~Administrator() {};

//accessors
string Administrator::getTitle() { return title; };
string Administrator::getArea() { return area; };
string Administrator::getSupervisor() { return supervisor; };
//mutators
void Administrator::setTitle(string newTitle) { title = newTitle; }
void Administrator::setArea(string newArea) { area = newArea; }
void Administrator::setSupervisor(string newSupervisor) { supervisor = newSupervisor; }

void Administrator::enterData() {
	string newName, newSsn, newTitle, newArea, newSupervisor;
	double newSalary;
	cout << "Administrative employee data is being entered:" << endl;
	cout << "-----------------------------" << endl;
	cout << "Enter Administrator's name: ";
	cin >> newName;
	setName(newName);
	cout << "Enter Administrator's ssn: ";
	cin >> newSsn;
	setSsn(newSsn);
	cout << "Enter title: ";
	cin >> newTitle;
	setTitle(newTitle);
	cout << "Enter area of responsibility: ";
	cin >> newArea;
	setArea(newArea);
	cout << "Enter supervisor's name: ";
	cin >> newSupervisor;
	setSupervisor(newSupervisor);
	cout << "Enter salary: ";
	cin >> newSalary;
	setSalary(newSalary);
}

void Administrator::printData() {
	cout << "Printing Administrator data" << endl;
	cout << "-----------------------------" << endl;
	cout << "Name:" << getName() << endl;
	cout << "Ssn:" << getSsn() << endl;
	cout << "Salary:" << getSalary() << endl;
	cout << "Title:" << title << endl;
	cout << "Responsibility:" << area << endl;
	cout << "Supervisor:" << supervisor << endl;
	cout << endl;
}

void Administrator::printCheck() {
	cout << "CHECK FOR " << getName() << endl;
	cout << "-----------------------------" << endl;
	cout << "Pay to the order of: " << getName() << endl;
	cout << "The sum of: " << getSalary() << " dollars" << endl;
	cout << "Check stub: NOT NEGOTIABLE" << endl;
	cout << "Employee number: " << getSsn() << endl;
	cout << "Administrative Employee" << endl;
	cout << "Regular pay: " << getSalary() << endl;
	cout << endl;
}
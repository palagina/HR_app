#include <iostream>
#include <string>
using namespace std;
#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee() :Employee(), salary(0.0) {}

SalariedEmployee::SalariedEmployee(const string& name, const string& ssn, double salary)
	: Employee(name, ssn),
	salary(salary) {}

SalariedEmployee::~SalariedEmployee() {};

//accessors
double SalariedEmployee::getSalary() { return salary; };
//mutators
void SalariedEmployee::setSalary(double newSalary) { salary = newSalary; }

void SalariedEmployee::printCheck() {
	cout << "CHECK FOR " << getName() << endl;
	cout << "-----------------------------" << endl;
	cout << "Pay to the order of: " << getName() << endl;
	cout << "The sum of: " << salary << " dollars" << endl;
	cout << endl;
	cout << "-----------------------------" << endl;
	cout << "Check stub: NOT NEGOTIABLE" << endl;
	cout << "Employee number: " << getSsn() << endl;
	cout << "Salaried Employee" << endl;
	cout << "Regular pay: " << salary << endl;
	cout << endl;
}





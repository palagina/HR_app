#include <iostream>
#include <string>
using namespace std;
#include "Employee.h"

Employee::Employee (string newName, string newSsn, double newNetPayment, double newSalary) : name(newName), ssn(newSsn), netPayment(newNetPayment), salary(newSalary) {}
Employee::Employee (string newName, string newSsn) : name(newName), ssn(newSsn), netPayment(0.0), salary(0.0) {}

Employee::Employee() {
	name = "No name";
	ssn = "000";
	netPayment = 0.0;
	salary = 0.0;
}

Employee::~Employee() {};

//accessors
string Employee::getName() { return name; };
string Employee::getSsn() { return ssn; };
double Employee::getNetPayment() { return netPayment; };
double Employee::getSalary() { return salary; };
//mutators
void Employee::setName(string newName) { name = newName; }
void Employee::setSsn(string newSsn) { ssn = newSsn; }
void Employee::setNetPayment(double newNetPay) { netPayment = newNetPay; }
void Employee::setSalary(double newSalary) { newSalary = newSalary; }

void Employee::printCheck() {
	cout << "-----------------------------" << endl;
	cout << "ERROR: printCheck function called for UNDIFFERENTIATED EMPLOYEE " << endl;
	cout << "Check wih the author of the program about this bug " << endl;
	cout << endl;
}

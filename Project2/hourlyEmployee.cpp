#include <iostream>
#include <string>
using namespace std;
#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee() :Employee(), wageRate(0.0), hours(0.0) {}

//HourlyEmployee::HourlyEmployee(const string& name, const string& ssn, double wageRate, double hours)
//	: Employee (name, ssn),
//	wageRate(0.0), hours(0.0) {}

HourlyEmployee::HourlyEmployee(const string& name, const string& ssn, double wageRate, double hours)
	: Employee(name, ssn),
	wageRate(wageRate), hours(hours) {}

HourlyEmployee::~HourlyEmployee() {};

//accessors
double HourlyEmployee::getWageRate() { return wageRate; };
double HourlyEmployee::getHours() { return hours; };
//mutators
void HourlyEmployee::setWageRate(double newWageRate) { wageRate = newWageRate; }
void HourlyEmployee::setHours(double newHours) { hours = newHours; }
double HourlyEmployee::countPay(double wageRate, double hours) { return wageRate * hours; }

void HourlyEmployee::printCheck() {
	cout << "CHECK FOR " << getName() << " for " << hours << " hours" << endl;
	cout << "-----------------------------" << endl;
	cout << "Pay to the order of: " << getName() << endl;
	cout << "The sum of: " << countPay(wageRate, hours) << " dollars" << endl;
	cout << endl;
	cout << "-----------------------------" << endl;
	cout << "Check stub: NOT NEGOTIABLE" << endl;
	cout << "Employee number: " << getSsn() << endl;
	cout << "Hourly Employee" << endl;
	cout << "Hours worked: " << hours << ", " << "Rate: " << wageRate << ", " << "Pay: " << countPay(wageRate, hours) << endl;
	cout << endl;
}

#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H
#include "Employee.h"
#include <iostream>
#include <string>
using namespace std; 

class HourlyEmployee : public Employee {
public:
	HourlyEmployee();
	HourlyEmployee(const string& name, const string&ssn, double wageRate, double hours);
	double getWageRate();
	double getHours();
	void setWageRate(double newWageRate);
	void setHours(double newHours);
	void printCheck();
	double countPay(double wageRate, double hours);
	~HourlyEmployee();

private:
	double wageRate;
	double hours;

};


#endif
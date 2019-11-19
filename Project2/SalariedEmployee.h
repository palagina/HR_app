#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H
#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;

class SalariedEmployee : public Employee {
public:
	SalariedEmployee();
	SalariedEmployee(const string& name, const string& ssn, double salary);

	double getSalary();
	void setSalary(double newSalary);
	void printCheck();

	~SalariedEmployee();

private:
	double salary;
};


#endif
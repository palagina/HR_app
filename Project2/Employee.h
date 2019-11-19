#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
	//constructors
	Employee();
	Employee(string name, string ssn);
	Employee(string name, string ssn, double netPayment, double salary);
	~Employee();
	//accessors
	string getName();
	string getSsn();
	double getNetPayment();
	double getSalary();
	//mutators
	void setName( string newname );
	void setSsn( string newSsn); 
	void setNetPayment( double newNetPay);
	void setSalary(double newSalary);

	void printCheck();
	
private:
	string name;
	string ssn;
	double netPayment;
	double salary;
};

#endif
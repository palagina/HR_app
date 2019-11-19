#include <iostream>
using namespace std;
#include <string>
#include "Employee.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"
#include "Administrator.h"

int main() {
	Employee Mark ("Mark", "12345", 100, 1200.50);
	Mark.printCheck();
	Mark.setSsn("54321");
	Mark.printCheck();

	Employee Alice("Alice", "363636", 200, 1500.90);
	Alice.printCheck();

	//Hourly Employee
	HourlyEmployee Sam("Sam", "111111", 12.0, 10.0);
	Sam.printCheck();
	Sam.Employee::printCheck();

	//Salaried Employee
	SalariedEmployee Dean("Dean", "122221", 1234.0);
	Dean.printCheck();

	//Administrative Employee
	Administrator Jane;
	Jane.enterData();
	Jane.printCheck();
	string newSupervisor;
	cout << "Change supervisor to ";
	cin >> newSupervisor;
	Jane.setSupervisor(newSupervisor);
	cout << "Increase salary" << endl;
	cout << endl;
	Jane.setSalary(Jane.getSalary() + 50);
	Jane.printCheck();

	return 0;
}
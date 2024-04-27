/*Exercise 1
* find area 
#include<iostream>

using namespace std;

int main() {
	double radius;
	double area;
	double pi = 3.14;

	cout << "Enter Radius of circle ";
	cin >> radius;

	area = pi * radius * radius;

	cout << "This is the area: " << area << endl;
}
*/

//Exercise 2

#include<iostream>

using namespace std;

int main() {
	float basicSalary;
	float percentageOfAllowances;
	float percentageOfDeductions;
	float netSalary;

	cout << "Enter basic Salary ";
	cin >> basicSalary;
	cout << "Enter percentage of allowance ";
	cin >> percentageOfAllowances;
	cout << "Enter percentage of Deduction ";
	cin >> percentageOfDeductions;

	netSalary = basicSalary + basicSalary * percentageOfAllowances / 100 - basicSalary * percentageOfDeductions / 100;

	cout << " the total net salary is " << netSalary << endl;


}
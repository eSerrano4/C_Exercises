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

/* #include<iostream>

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


} */

/*#include<iostream>

using namespace std;

int main()
{
	string arr[12] = { "jan", "feb", "mar","apr","may","jun","jul","aug","sep","oct","nov","dec" };
	int m = 0;
	//display month name using elfe if ladder    
	for (int i = 0; i <= (sizeof(arr) / sizeof(arr[0])) - 1; i++) {
		if (m == i) {
			cout << arr[i];

		}
	}
}*/

//Exercise 3
/* Write program to offer discounts on total bill Amount 
Program should take Total Amount as input and calculate discount
if bill amount < 100 no discount
if bill amount is >= 100 and lesss than 500 then 10% discount
if bill amount is >=500 then 20% discount*/

#include<iostream>

using namespace std;

int main()
{
	double totalAmount;
	double discount = 0.00;
	double finalTotal;

	cout << "Enter total ";
	cin >> totalAmount;

	if(totalAmount >= 500){
		discount = totalAmount * 20/100;
	} else if(totalAmount >= 100 && totalAmount <500){
		discount = totalAmount * 10/100;
	}else{
		discount = 0.00;
	}

	finalTotal = totalAmount - discount;

	cout<<"Your Total is "<< finalTotal<<endl;

}

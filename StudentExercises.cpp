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

/*#include<iostream>

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
*/

/*Exercise 4
all years which are perfectly divisible by 4 are leap years except for century years(years ending 00)
whis is leap year only it is perfectly divisible by 400.
For example 2012, 2004, 1968 etc are leap year but 1971, 2006 etc are not leap years. Similarly 1200, 1600, 2000, 2400 are leap years but 1700, 1800, 1900 etc are not.

In this progrma below user is asked to enter a year and this program checks whether the uyear entered by user is leapyear or not.
*/

/*#include<iostream>

using namespace std;

int main() 
{
	int year;

	cout << "please enter year to test: "<<endl;
	cin >> year;
	
	//first if to check if divisible by 4
	if (year % 4 == 0) {
		//if divisible by 4 check to see if divisible by 100
		if (year % 100 == 0) {
			//if divisible by 100 check to see if divisible by 400
			if (year % 400 == 0)
				//if meet all criteria then it is a leap year
				cout << year << "Is a leap year";

			else
				cout << "Not a leap year";

		}
		//if divisible by 100 is leap year
		else cout << year << "Is leap year";
	}
	//if divisible by 4 is leap year 
	else 
		cout << year << "Is a leap year";
	

}*/

//Display Digits of a number - Write a loop to display Digits of a given number in reverse


/*#include<iostream>

using namespace std;

int main() 
{
	int numb; 
	int reverseDigit;
	cout << "Enter a number";
	cin >> numb;

	while (numb > 0) {
		reverseDigit = numb % 10;
		numb = numb / 10;
		cout << reverseDigit << " ";
	}
}*/

/*#include<iostream>

using namespace std;

int main() {
	int n, r, sum =0, temp; 

	cout << "enter number";
	cin >> n;
	temp = n;

	while (n > 0) {
		r = n % 10;
		n = n / 10;
		sum = sum + (r * r * r);
	}
	if (sum == temp)
		cout << "armstrong";
	else
		cout << "not armstrong";
}// test */

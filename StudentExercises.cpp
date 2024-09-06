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
}*/

//exercise 5 Palindrome
/*#include<iostream>
using namespace std;
int main() {
	int n, r, temp =0, rev = 0;
	cout << "enter number ";
	cin >> n;
	temp = n;
	while (n > 0) {
		r = n % 10;
		n = n / 10;
		rev = rev * 10 + r;
	}
	cout << rev<<endl;
	if (temp == rev) {
		cout << "is Palindrome"<<endl
			;
	}
	else {
		cout << "Not palindrome"<<endl;
	}
}*/

/*//find GCD of to numbers
#include<iostream>
using namespace std;
int main() {
	int m, n;
	cout << "Enter first number " << endl;
	cin >> m;
	cout << "Enter Second Number " << endl;
	cin >> n;
	while (m != n) {
		if (m > n) {
			m = m - n;
		}
		else if (n > m) {
			n = n - m;
		}
	}
	cout << "common denominator = " << n;
}*/

/*#include<iostream>
using namespace std;
int main() {
	int max, n = 5;;
	int arr[5] = { 4,7,10,8,1 };
	max = arr[0];
	for (int i = 1; i < 5; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	cout << max;
}*/

//create star square pattern using nested loop
/*#include<iostream>

using namespace std;

int main() {

	for (int i = 1; i <= 4; i++) {
		for (int j = 1; j <= 4; j++) {
			cout << "* ";
		}
		cout << endl;
	}
}*/

/* //Right triangle 

 #include<iostream>
using namespace std;

int main(){
	for(int i = 0; i<4; i++){
		for(int j = 0; j<=4; j++ ){
			if(i>=j){
				cout<<"* ";
			}
		}
		cout<<endl;

	}
}*/
/* Star design*/
/*#include<iostream>
using namespace std;

int main(){
int n = 5; 
for(int i = 0;i<n;i++){
	for(int j = 0; j<n; j++){
		if(j>=i){
			cout<<"* ";
		}else{
			cout<<" ";
		}
	}cout<<endl;
}
}*/
//multiple 2d array
/*#include<iostream>
using namespace std;

int main(){
	int a[2][3]={{1,2,3},{4,5,6}};
	int b[2][3]={{7,8,9},{3,5,7}};
	int c[2][3];

	for(int i = 0; i<2;i++){
		for(int j =0; j<3;j++){
			c[i][j] = a[i][j]*b[i][j];
			cout<<c[i][j]<<" ";
		}
	}cout<<endl;
}*/

//Calculate average of all elements in an array 

/*#include<iostream>
using namespace std;

int main(){
	int n, sum =0;
	cout<<"Please enter number: ";
	cin>>n;

	int arr[n];
	int avg;

	for(int i = 0; i<n; i++){
		arr[i]= rand() % 100;
		cout<<arr[i]<<endl;
		sum += arr[i];
	}

	cout<<"Answer: "<<(avg = sum/n)<<endl;
}*/

/*
//multiple matrices
#include<iostream>
using namespace std;

int main(){
	int c1, c2, r1, r2, mult[10][10],b[10][10],a[10][10];

	cout<<"Enter row and column size of first matrix"<<endl;
	cin>>c1>>r1;
	cout<<"Enter row and column size of second matrix"<<endl;
	cin>>c2>>r2;
	


	if(c1!=r2){

		cout<<"Number of columns in first matrix dont match rows in second matrix";
		return 0;

	}

		cout<< endl << "Enter the numbers for array 1 "<< endl;
		
		//fill in first 2D Array with user input
		for(int i=0; i<r1; ++i){
			for(int j = 0; j< c1; ++j){
				cout<<"Enter Element for A"<< i << j << " : ";
				cin>>a[i][j];
			}
		}

		cout<<endl<<"Enter the numbers for array 2 "<<endl;
		//fill in 2nd 2D Array with user input
		for(int i = 0; i<r2; ++i){
			for(int j =0; j<c2; ++j){
				cout<<"Enter Element for B"<< i << j << " : ";
				cin>>b[i][j];
		}
		}

		for (int i =0; i<r2; ++i){
			for(int j = 0; j<c1; ++j){
				for(int k = 0; k < c1; ++k ){
					mult[i][j]+= a[i][k] * b[k][j];
					cout<<mult[i][j]<<" ";
				}
			}
		}

		for (int i =0; i<r1; ++i){
			for(int j = 0; j < c2;++j){
				cout<<" "<<mult[i][j];

				if(j == c2-1){
					cout<< endl;
				}
			}
		}

return 0;
}
*/


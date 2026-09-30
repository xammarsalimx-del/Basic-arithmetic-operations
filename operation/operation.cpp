#include <iostream>
#include <string>
using namespace std;
int main()
{
	float num1, num2, all;
	char operation;
	cout << "Enter the first number : ";
	cin >> num1;
	cout << "Enter the second number : ";
	cin >> num2;
	cout << "Enter the opration : ";
	cin>> operation;
	switch (operation) {
		case '+':
			all = num1 + num2;
			cout << num1 << "+" << num2 << "=" << all;
			break;
		case '-':
			all = num1 - num2;
			cout << num1 << '-' << num2 << "=" << all;
			break;
		case '*':
			all = num1 * num2 ;
			cout << num1 << '*' << num2<<"=" << all;
			break ;
		case '/' :
			all = num1 / num2 ;
			cout << num1 << "/" << num2 <<"=" << all; 
			break ;
		default :
			cout << "Error";
	}
}
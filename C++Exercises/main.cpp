#include <iostream>
#include <chrono>
using namespace std;

void clearInputBuffer() {
	cin.clear();        //clear buffer
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
int main()
{
	// 1. Ask for name and age then print a greeting:

	string name;
	int age;

	cout << "Enter your name: ";
	cin >> name;

	cout << "Enter your age: ";
	cin >> age;

	cout << "Hello, " << name << "! You are " << age << " years old" << endl;
	cout << endl;

	clearInputBuffer();

	//2. Ask for two numbers and print the product:

	float num1, num2;

	cout << "Enter the first number ";
	cin >> num1;

	cout << "Enter the second number ";
	cin >> num2;

	float product1 = num1 * num2;

	cout << "The product is: " << product1 << endl;
	cout << endl;

	//Write A program that takes in 2 numbers as the input and prints their + - * /

	float num3, num4;

	cout << "Enter the first number ";
	cin >> num3;

	cout << "Enter the second number ";
	cin >> num4;

	float product = num3 * num4;
	float sum = num3 + num4;
	float diff = num3 - num4;
	float quo = num3 / num4;

	cout << endl;
	cout << num3 << " + " << num4 << " = " << sum << endl;
	cout << num3 << " - " << num4 << " = " << diff << endl;
	cout << num3 << " / " << num4 << " = " << quo << endl;
	cout << num3 << " * " << num4 << " = " << product << endl;

	//4. Ask for a number and print even or odd:
	int number;

	cout << '\n';
	cout << "Enter a number ";
	cin >> number;
	cout << '\n';

	if (number % 2 == 0) {
		cout << "The number is even" << endl;
	}
	else {
		cout << "The number is odd" << endl;
	}

	//5. 'Divisible by 2 or 3'

	if (number % 2 == 0) {
		cout << "The number is divisible by 2" << endl;
	}
	if (number % 3 == 0) {
		cout << "The number is divisible by 3" << endl;
	}
	cout << endl;

	//6. 'Past, Present, or Future'

	int currentYear = 2023;
	int year;

	cout << "Enter a year: ";
	cin >> year;

	if (year < currentYear)
	{
		cout << "The year " << year << " is in the past" << endl;
	}
	else if (year == currentYear)
	{
		cout << "The year " << year << " is in the present" << endl;
	}
	else if (year > currentYear)
	{
		cout << "The year " << year << " is in the future" << endl;
	}

	return 0;
}


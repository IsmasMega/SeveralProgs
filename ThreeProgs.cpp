#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

void Calculator()
{
	float num1, num2;
	cout << "CALCULATOR" << endl << "Enter the first number: " << endl;
	cin >> num1;
	cout << "Enter the second number: " << endl;
	cin >> num2;
	cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
	cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
	cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
	cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
}

void Date()
{
	cout << "DATE" << endl;
	while (true)
	{
		SYSTEMTIME time;
		GetLocalTime(&time);
		cout << time.wDay << " / " << time.wMonth << " / " << time.wYear << "     " << time.wHour << ":" << time.wMinute << ":" << time.wSecond << endl;
		Sleep(1000);
	}
}

void Converter()
{
	cout << "CONVERTER" << endl << "RUB   USD   EUR" << endl;

	string currency;
	cout << "Choose the currency: ";
	cin >> currency;

	float n;
	cout << "Enter the number: ";
	cin >> n;

	if (currency == "RUB")
	{
		cout << n << " RUB = " << n * 0.014 << " USD and " << n * 0.012 << " EUR";
	}
	else if (currency == "USD")
	{
		cout << n << " USD = " << n * 71 << " RUB and " << n * 0.87 << " EUR";
	}
	else if (currency == "EUR")
	{
		cout << n << " EUR = " << n * 1.15 << " USD and " << n * 81 << " EUR";
	}
	else
	{
		cout << "No such currency in our converter";
	}
}

int main()
{
	cout << "Calculator	  Date    Converter" << endl;
	string choice;
	cout << "Choose the program: ";
	cin >> choice;
	cout << endl;

	if (choice == "Calculator")
	{
		Calculator();
	}
	else if (choice == "Date")
	{
		Date();
	}
	else if (choice == "Converter")
	{
		Converter();
	}
	else
	{
		cout << "Program " << choice << " not found";
	}
}
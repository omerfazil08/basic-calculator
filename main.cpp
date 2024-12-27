#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {

	int a, b, c;
	double result; 
	cout << "Welcome to Calculator2000!" << endl;
	cout << "1 for addition" << endl;
	cout << "2 for subtraction" << endl;
	cout << "3 for multiplication" << endl;
	cout << "4 for division" << endl;

	cout << "Enter the opeartion you want to perform: ";
	cin >> c;

	if (c == 1)
	{
		cout << "a = ";
		cin >> a;

		cout << "b = ";
		cin >> b;


		result = a + b;

		cout << "result is = " << result;
	}

	else if (c == 2)
	{
		cout << "a = ";
		cin >> a;

		cout << "b = ";
		cin >> b;


		result = a - b;

		cout << "result is = " << result;
	}

	else if (c == 3)
	{
		cout << "a = ";
		cin >> a;

		cout << "b = ";
		cin >> b;


		result = a * b;

		cout << "result is = " << result;
	}

else if (c == 4)
	{
		cout << "a = ";
		cin >> a;

		cout << "b = ";
		cin >> b;


		result = a /b;

		cout << "result is = " << result;
	}
	/*
	result = a - b;
	result = a * b;
	result = a / b;
	*/

else {
		cout << "ERROR";




	}
	return 0;
}

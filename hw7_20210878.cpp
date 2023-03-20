#include <iostream>
using namespace std;

void sortThreeNumbers(double& num1, double& num2, double& num3);

int main()
{
	double number1, number2, number3;
	cout << "Enter three numbers: ";
	cin >> number1 >> number2 >> number3;

	sortThreeNumbers(number1, number2, number3);

	cout << "After sorting three numbers: " << endl;
	cout << number1 << " " << number2 << " " << number3 << endl;

	return 0;
}

void sortThreeNumbers(double& num1, double& num2, double& num3)
{
	if (num1 > num2)
	{
		double temp = num1;
		num1 = num2;
		num2 = temp;
	}

	if (num2 > num3)
	{
		double temp = num2;
		num2 = num3;
		num3 = temp;
	}

	if (num1 > num2)
	{
		double temp = num1;
		num1 = num2;
		num2 = temp;
	}
}
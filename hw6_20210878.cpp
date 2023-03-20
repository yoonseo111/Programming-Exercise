// 20221106
// ±Ë¿±º≠

#include <iostream>
using namespace std;

void displaySortedNumbers(double num1, double num2, double num3);

void displaySortedNumbers(double num1, double num2, double num3)
{
	if (num1 < num2) {
		if (num2 < num3)
			cout << num1 << " " << num2 << " " << num3 << endl;
		else {
			if (num1 < num3)
				cout << num1 << " " << num3 << " " << num2 << endl;
			else
				cout << num3 << " " << num1 << " " << num2 << endl;
		}
	}
	else {
		if (num3 < num2)
			cout << num3 << " " << num2 << " " << num1 << endl;
		else {
			if (num1 < num3)
				cout << num2 << " " << num1 << " " << num3 << endl;
			else
				cout << num2 << " " << num3 << " " << num1 << endl;
		}
	}
}

int main() {
	double num1, num2, num3;
	cout << "Enter the three numbers: ";
	cin >> num1 >> num2 >> num3;
	cout << '\n' << "ø¿∏ß¬˜º¯ ¡§∑ƒ: ";

	displaySortedNumbers(num1, num2, num3);

	return 0;
}
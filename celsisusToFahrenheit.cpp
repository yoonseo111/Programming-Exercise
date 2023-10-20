// ±èÀ±¼­

#include <iostream>
#include <iomanip>
using namespace std;

double celsisusToFahrenheit(double celsius)
{
	double fahrenheit = (9.0 / 5) * celsius + 32;

	return fahrenheit;
}

double fahrenheitToCelsius(double fahrenheit)
{
	double celsius = (5.0 / 9) * (fahrenheit - 32);

	return celsius;
}

int main()
{
	cout << "Celsius" << "    " << "Fahrenheit" << "   |   " << "Fahrenheit" << "    " << "Celsius" << endl;
	for (double celsius = 40.0, fahrenheit = 120.0; celsius >= 30.0, fahrenheit >= 29.0; celsius--, fahrenheit -= 10.0)
	{
		cout << fixed << setprecision(1) << celsius
			<< setw(12) << fixed << setprecision(1) << showpoint <<
			celsisusToFahrenheit(celsius) << "        |      " << fixed << setprecision(1) << fahrenheit
			<< setw(12) << fixed << setprecision(2) << showpoint <<
			fahrenheitToCelsius(fahrenheit) << endl;
	}


	return 0;
}

// ±èÀ±¼­

#include <iostream>
using namespace std;

int main()
{
	cout << "Enter temperature: ";
	int temp;
	cin >> temp;

	if (temp < 30)
		cout << "too cold" << endl;
	else if (temp > 100)
		cout << "too hot" << endl;
	else
		cout << "just right" << endl;

	return 0;
}

// 김윤서
// notebook
// Intel(R) Core(TM) i5-8265U CPU @ 1.60GHz   1.80 GHz
// 8.00GB
// Windows 10

#include <iostream>
using namespace std;

int main()
{
	double sum = 0.0;
	double saving = 100.0;
	double rate = 0.00417;
	int i, n;

	n = 6;

	for(i = 0; i < n; i++)
	{
		sum = (100 + sum) * (1 + rate);
	}

	cout << "6개월 후의 적립 금액: " << sum << endl;

	return 0;
}
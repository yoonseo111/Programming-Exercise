//±èÀ±¼­

#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int binarySearch(const int list[], int key, int listSize)
{
	int low = 0;
	int high = listSize - 1;

	while (high >= low)
	{
		int mid = (low + high) / 2;
		if (key < list[mid])
			high = mid - 1;
		else if (key == list[mid])
			return mid;
		else
			low = mid + 1;
	}

	return -low - 1;
}

int main()
{
	const int list[] = { 1,2,3,4,5 };
	int size = 5;
	int a = binarySearch(list, 2, size);
	cout << a << endl;

	return 0;
}

// 20221126
// ±Ë¿±º≠

#include <iostream>
using namespace std;

int main()
{
	double NUMBER_OF_STUDENTS;
	cout << "Enter the number of students: ";
	cin >> NUMBER_OF_STUDENTS;

	double* scoreList = new double[NUMBER_OF_STUDENTS];

	cout << "Enter " << NUMBER_OF_STUDENTS << " scores: ";

	for (int i = 0; i < NUMBER_OF_STUDENTS; i++)
	{
		cin >> scoreList[i];
	}

	
	double max = scoreList[0];
	for (int i = 1; i < NUMBER_OF_STUDENTS; i++)
	{
		if (scoreList[i] > max)
			max = scoreList[i];
	}

	for (int i = 0; i < NUMBER_OF_STUDENTS; i++)
	{
		char grade;
		if (scoreList[i] >= max - 10)
			grade = 'A';
		else if (scoreList[i] >= max - 20)
			grade = 'B';
		else if (scoreList[i] >= max - 30)
			grade = 'C';
		else if (scoreList[i] >= max - 40)
			grade = 'D';
		else
			grade = 'F';

		cout << "Students " << i << " score is " << scoreList[i] << " and grade is " << grade << endl;
	}

	return 0;
}
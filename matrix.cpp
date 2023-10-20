//±èÀ±¼­

#include <iostream>
using namespace std;

const int COLUMN_SIZE = 3;

int main()
{
	const int ROW_SIZE = 3;

	double m1[ROW_SIZE][COLUMN_SIZE];
	cout << "Enter matrix1: ";
	for (int i = 0; i < ROW_SIZE; i++)
		for (int j = 0; j < COLUMN_SIZE; j++)
			cin >> m1[i][j];

	double m2[ROW_SIZE][COLUMN_SIZE];
	cout << "Enter matrix2: ";
	for (int i = 0; i < ROW_SIZE; i++)
		for (int j = 0; j < COLUMN_SIZE; j++)
			cin >> m2[i][j];

	cout << "The addition of the matrices is " << endl;

	cout << m1[0][0] << " " << m1[0][1] << " " << m1[0][2] << "     " 
		<< m2[0][0] <<" " << m2[0][1] <<" "<< m2[0][2] << "            "
		<< m1[0][0] + m2[0][0]<< " " << m1[0][1] + m2[0][1] << " " << m1[0][2] + m2[0][2] << "\n"
		<< m1[1][0] << " " << m1[1][1] << " " << m1[1][2] <<
		"  +  " << m2[1][0] << " " << m2[1][1] <<" " << m2[1][2] <<"    =   "
		<< m1[1][0] + m2[1][0] << " " << m1[1][1] + m2[1][1] << " " << m1[1][2] + m2[1][2] <<
		"\n" << m1[2][0] <<" "<< m1[2][1] <<" "<<m1[2][2] << "     " 
		<< m2[2][0] <<" " << m2[2][1] <<" " << m2[2][2]<<"      "
		<< m1[2][0] + m2[2][0] << " " << m1[2][1] + m2[2][1] << " " << m1[2][2] + m2[2][2] << endl;

	return 0;
}

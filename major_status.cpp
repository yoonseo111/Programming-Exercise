// ±èÀ±¼­

# include <iostream>
# include <string>
using namespace std;

int main()
{
	cout << "Enter two characters: ";
	string enter;
	cin >> enter;

	if (enter[0] == 'M' && enter[1] == '1')
		cout << "Mathematics Freshman" << endl;
	else if (enter[0] == 'M' && enter[1] == '2')
		cout << "Mathematics Sophomore" << endl;
	else if (enter[0] == 'M' && enter[1] == '3')
		cout << "Mathematics Junior" << endl;
	else if (enter[0] == 'M' && enter[1] == '4')
		cout << "Mathematics Senior" << endl;
	else if (enter[0] == 'C' && enter[1] == '1')
		cout << "Computer Science Freshman" << endl;
	else if (enter[0] == 'C' && enter[1] == '2')
		cout << "Computer Science Sophomore" << endl;
	else if (enter[0] == 'C' && enter[1] == '3')
		cout << "Computer Science Junior" << endl;
	else if (enter[0] == 'C' && enter[1] == '4')
		cout << "Computer Science Senior" << endl;
	else if (enter[0] == 'I' && enter[1] == '1')
		cout << "Information Technology Freshman" << endl;
	else if (enter[0] == 'I' && enter[1] == '2')
		cout << "Information Technology Sophomore" << endl;
	else if (enter[0] == 'I' && enter[1] == '3')
		cout << "Information Technology Junior" << endl;
	else if (enter[0] == 'I' && enter[1] == '4')
		cout << "Information Technology Senior" << endl;
	else if (enter[0] != 'M' && enter[0] != 'C' && enter[0] != 'I')
	{
		cout << "Invalid major code" << endl;
		return 0;
	}
	else
	{
		cout << "Invalid status code" << endl;
		return 0;
	}

	return 0;
	
}

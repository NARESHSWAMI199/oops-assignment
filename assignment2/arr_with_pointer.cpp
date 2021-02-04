#include <iostream>
#include <string>

using namespace std;

class Student
{
	string name;
	int marks;
	public:
		void getName()
		{
			getline( cin, name );
		}
		void getMarks()
		{
			cin >> marks;
		}
		void displayInfo()
		{
			cout << "Name : " << name << endl;
			cout << "Marks : " << marks << endl;
		}
};

int main()
{
	Student st[5];
	for( int i=0; i<5; i++ )
	{
		cout << "Student " << i + 1 << endl;
		cout << "Enter name" << endl;
		st[i].getName();
		cout << "Enter marks" << endl;
		st[i].getMarks();
	}

	for( int i=0; i<5; i++ )
	{
		cout << "Student " << i + 1 << endl;
		st[i].displayInfo();
	}
	return 0;
}




// output
// Student 1
// Enter name
// Jack
// Enter marks
// 54
// Student 2
// Enter name
// Marx
// Enter marks
// 45
// Student 3
// Enter name
// Julie
// Enter marks
// 47
// Student 4
// Enter name
// Peter
// Enter marks
// 23
// Student 5
// Enter name
// Donald
// Enter marks
// 87
// Student 1
// Name : Jack
// Marks : 54
// Student 2
// Name : Marx
// Marks : 45
// Student 3
// Name : Julie
// Marks : 47
// Student 4
// Name : Peter
// Marks : 23
// Student 5
// Name : Donald
// Marks : 87
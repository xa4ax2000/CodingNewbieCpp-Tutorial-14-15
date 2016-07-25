#include <iostream>
using namespace std;

struct classroom
{
	char name[20];
	int grade;
};

int main()
{
	classroom students[3] = 
	{
		{"Andam Schmidt", 95},
		{"Andrew Hyun", 47},
		{"James Benson", 95}
	};

	cout << students[0].name << "'s grade is " << students[0].grade << endl;
	cout << students[1].name << "'s grade is " << students[1].grade << endl;
	cout << students[2].name << "'s grade is " << students[2].grade << endl;

	system("pause");
	return 0;
}
#include <iostream>
using namespace std;

struct classroom
{
	char name[20];
	int grade;
};

int main()
{
	classroom student1 =
	{
		"Adam Schmidt",
		95
	};

	classroom student2 =
	{
		"Andrew Hyun",
		47
	};

	classroom student3 =
	{
		"James Benson",
		97
	};

	cout << student1.name << "'s grade is " << student1.grade << endl;
	cout << student2.name << "'s grade is " << student2.grade << endl;

	system("pause");
	return 0;
}
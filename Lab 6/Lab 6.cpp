#include <iostream>
using namespace std;

struct IT_MEN
{
	string username;
	int ID;
	int age;
	string role;
	int day_in_dc_gr;
};

void printInformation(IT_MEN it_men)
{
	cout << "Username :" << it_men.username << endl;
	cout << "ID :#" << it_men.ID << endl;
	cout << "Age :" << it_men.age << endl;
	cout << "Role :" << it_men.role << endl;
	cout << "Day in the discord group  :" << it_men.day_in_dc_gr << endl;
}

int main()
{
	IT_MEN gulevich{ "FUNTIK",6656,17,"BIG BOYS",73 };
	IT_MEN belke{ "Missing your beauty",9241,17,"BIG BOYS",73 };
	IT_MEN bodnar{ "Simv0l",8115,17,"SLAVE",73 };
	IT_MEN bodnarchuk{ "CHiroBu4oK",9348,18,"SLAVE",73 };

	if (gulevich.age > belke.age && gulevich.age > bodnar.age && gulevich.age > bodnarchuk.age) 
	{
		cout << "Gulevich Pavlo is oldest MEN" << endl;
	}
	if (gulevich.age < belke.age && belke.age > bodnar.age && belke.age > bodnarchuk.age)
	{
		cout << "Belke German is oldest MEN" << endl;
	}
	if (bodnar.age > belke.age && gulevich.age < bodnar.age && bodnar.age > bodnarchuk.age)
	{
		cout << "Bodnar Michailo is oldest MEN" << endl;
	}
	if (bodnarchuk.age > belke.age && bodnarchuk.age > bodnar.age && gulevich.age < bodnarchuk.age)
	{
		cout << "Bodnarchuk Oleksandr is oldest MEN" << endl;
	}
	int agesum;
	agesum = gulevich.age + belke.age + bodnar.age + bodnarchuk.age;
	cout << agesum << endl;

	printInformation(gulevich);
	cout << '\n';
	printInformation(belke);
	cout << '\n';
	printInformation(bodnar);
	cout << '\n';
	printInformation(bodnarchuk);
	cout << '\n';
}
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

class Person
{
private:
	double health;
	string name;
	int level;
	short speed;
	string commitment;
	int wisdom;  
	int dexterity;
	int endurance;
	int luck;


public:
	Person(double health,string name,int level, short speed,string commitment,int wisdom,int dexterity,int endurance,int luck)
	{
		this->health = health;
		this->name = name;
		this->level = level;
		this->speed = speed;
		this->commitment = commitment;
		this->wisdom = wisdom;
		this->dexterity = dexterity;
		this->endurance = endurance;
		this->luck = luck;
	}
	Person(string name) //test constructor
	{
		this->name = name;
	}
	void personInfo()
	{
		cout.fill('-');
		cout << setw(20) << "\x1b[33m Person " << name << "\x1b[0m" << endl;
		cout << "\x1b[32mHealth = " << health << endl;
		cout << "Level = " << level << endl;
		cout << "Speed = " << speed << endl;
		cout << "Commitment = " << commitment << endl;
		cout << "Wisdom = " << wisdom << endl;
		cout << "Dexterity = " << dexterity << endl;
		cout << "Endurance = " << endurance << endl;
		cout << "Luck = " << luck <<"\x1b[0m" << endl;
	}

	~Person()
	{
		cout << "call destructor" << endl;
	}


};



int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	Person padavan(rand() % 100 + 20, "pavel", rand() % 25, rand() % 6, "Wizard", rand() % 70 + 5,rand() % 70 + 5, rand() % 100 + 10, rand()%70 + 5);
	padavan.personInfo();


	return 0;
}
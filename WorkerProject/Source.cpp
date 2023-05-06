#include <iostream>
#include "Soldier.h"
#include <time.h>
using namespace std;




int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	Soldier padavan(rand() % 45 + 80, "trooper", 30);
	Soldier padavan2(rand() % 45 + 80, "sharpshooter", 80);
	Soldier padavan3(rand() % 45 + 80, "gunner", 25);
	padavan.soldierInfo();
	padavan2.soldierInfo();


	return 0;
}
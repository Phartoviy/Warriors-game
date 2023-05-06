#pragma once
#include <iostream>
#include <iomanip>
#include <string>
class Soldier
{
private:
	double health;
	std::string commitment;
	int damage;

public:
	Soldier(double health, std::string commitment, int damage)
	{
		this->health = health;
		this->commitment = commitment;
		this->damage = damage;
	}
	void soldierInfo()
	{
		std::cout.fill('-');
		std::cout << std::setw(20) << "\x1b[33m Person " << commitment << "\x1b[0m" << std::endl;
		std::cout << "\x1b[32mHealth = " << health << std::endl;
		std::cout << "Commitment = " << commitment << std::endl;
		std::cout << "Damage = " << damage << "\x1b[0m" << std::endl;
	}
	int getHealth()
	{
		return health;
	}
	int getDamage()
	{
		return damage;
	}
	~Soldier()
	{
	}


};

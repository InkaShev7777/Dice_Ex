#pragma once
#include<iostream>
#include"c_Dice.h"
class c_Dices
{
	c_Dice* d1;
	c_Dice* d2;
	int D1, D2;
public:
	c_Dices(){}
	void Throw_Dice()
	{
		this->d1 = new c_Dice();
		this->d2 = new c_Dice();
		if (d1->getValue() > d2->getValue())
		{
			std::cout << "DICE 1 - WINER\n";
			this->D1++;
		}
		else if (d1->getValue() == d2->getValue())
		{
			D1++;
			D2++;
		}
		else
		{
			std::cout << "DICE 2 - WINER\n";
			this->D2++;
		}
	}
	void GameResult()
	{
		std::cout << "Dice 1: " << this->D1 << "  :  Dice 2: " << this->D2 << "\n";
	}
};


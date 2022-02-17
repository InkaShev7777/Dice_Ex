#pragma once
#include<iostream>
#include"c_Dice.h"
class c_Dices
{
	c_Dice* d1;
	c_Dice* d2;
	int D1, D2;
public:
	c_Dices()
	{
		this->D1 = 0;
		this->D2 = 0;
		this->d1 = nullptr;
		this->d2 = nullptr;
	}
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
			std::cout << "DICE 1 & DICE 2 - WINER\n";
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
	void End()
	{
		if (this->D1 > this->D2)
		{
			std::cout << "Winer: Dice 1!!!\n";
		}
		else if(this->D1 < this->D2)
		{
			std::cout << "Winer: Dice 2!!!\n";
		}
	}
	int getD1()
	{
		return this->D1;
	}
	int getD2()
	{
		return this->D2;
	}
};
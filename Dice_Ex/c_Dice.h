#pragma once
#include<iostream>
#include<time.h>
class c_Dice
{
	int value;
public:
	c_Dice()
	{
		
		this->value = rand() % 7;
	}
	int getValue()
	{
		return this->value;
	}
};


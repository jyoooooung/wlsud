#pragma once
#include <iostream>
using namespace std;

class Diner
{
private:
	int DinerNum = 0;
	char OtherChoice;
	char DrinkChoice;
	int time = 0;
	int Diner_time = 0;
	int Diner_cost = 0;

public:
	void DinerMenu();
	void Drink();
	void DinerTime();
};
#include <Windows.h>
#include "Human.h"
#include"Flat.h"
#include"House.h"
#include <iostream>

using namespace std;

unsigned int Human::count_instance{ 1 };

int main()
{
	setlocale(LC_ALL, "RU");
	Date birthday(18, 7, 1989);
	Human x("Ромашов", "Виктор", "Викторович", birthday);
	House z;
	z.showHouse();
	x.showHuman();





	return 0;
};
#pragma once
#include <iostream>
#include <Windows.h>
#include "Human.h"

using namespace std;


class Flat
{
public:
	Human* human;
	size_t number_apart;			
	size_t kol_human;				

	Flat(size_t& number_apart, size_t& kol_human, Human* human) :
		number_apart{ 0 }, kol_human{ 0 }, human{ human }
	{
		if (number_apart >= 1 && number_apart <= 1110) {
			this->number_apart = number_apart;
		}
		if (kol_human >= 1 && kol_human <= 7) {
			this->kol_human = kol_human;
		}
	};

	Flat() : Flat(0, 0, Human()) {}

	Flat& setNumberFlat(size_t number_apart) {
		this->number_apart = number_apart >= 1 && number_apart <= 1110 ? number_apart : 0;
		return *this;
	}
	Flat& setKolHuman(size_t kol_human) {
		this->kol_human = kol_human >= 1 && kol_human <= 7 ? kol_human : 0;
		return *this;
	}

	void showFlat()
	{
		cout << " вартира є : " << number_apart << " проживают " << kol_human << " человек(а)" << endl;
		cout << endl;
	}
};


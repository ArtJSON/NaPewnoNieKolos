#pragma once
#include <array>
#include <string>
#include <iostream>

using namespace std;

class Zad1
{
public:
	void method1(array<int, 10> arr) {
		int najmniejsza = INT16_MAX;
		int najwieksza = INT16_MIN;

		for (int liczba : arr)
		{
			if (liczba > najwieksza) {
				najwieksza = liczba;
			}
			if (liczba < najmniejsza) {
				najmniejsza = liczba;
			}
		}

		cout << "najwieksza liczba w tabeli: " << najwieksza << "\n";
		cout << "najmniejsza liczba w tabeli: " << najmniejsza << "\n";
	}

	void method1(array<string, 10> arr) {
		string najdluzszy = arr[0];
		string najkrotszy = arr[0];

		for (string wyraz : arr)
		{
			if (wyraz.size() > najdluzszy.size()) {
				najdluzszy = wyraz;
			}
			if (wyraz.size() < najkrotszy.size()) {
				najkrotszy = wyraz;
			}
		}

		cout << "najkrotszy string w tabeli: " << najkrotszy << "\n";
		cout << "najdluzszy string w tabeli: " << najdluzszy << "\n";
	}
};


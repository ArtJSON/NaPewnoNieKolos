#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class Account
{
public:
	Account(string nazwaUz, string haslo) {
		this->zalogowany = false;
		// zapisac do pliku
		ofstream plik;
		plik.open("dane.txt");

		plik << nazwaUz << endl << haslo;

		plik.close();
	}

	void Login(string nazwaUz, string haslo) {
		ifstream plik;
		plik.open("dane.txt");
		string nazwaZPliku; 
		string hasloZPliku;

		plik >> nazwaZPliku >> hasloZPliku;

		if (nazwaZPliku == nazwaUz && haslo == hasloZPliku) {
			this->zalogowany = true;
			cout << "Pomyslnie zalogowano\n";
		}
		else {
			cout << "Blad podczas logowania\n";
		}
	}

	void CheckData() {
		if (zalogowany) {
			cout << "Jakies informacje\n";
		} else {
			cout << "Musisz sie zalogowac zeby wyswietlic informacje\n";
		}
	}

	void Logout() {
		this->zalogowany = false;
		cout << "Pomyslnie wylogowane\n";
	}

private:
	bool zalogowany;
};

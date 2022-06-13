#include <iostream>
#include <array>
#include "Zad1.h"
#include "Zad2.h"

using namespace std;

int main()
{
    Zad1 obj;

    // zad 1
    cout << "Zad1:\n";
    array<int, 10> arr1 = { 1, 2, 3, 4, 0, 6, 1, -300, 12, 31};
    array<string, 10> arr2 = {
        "se",
        "dsadas",
        "3211231321312",
        "a",
        "a",
        "dsadasdas",
        "dsa",
        "dasdasdasddasdasdassad",
        "aaaaaaaaaaaa",
        "dddddd"
    };
    obj.method1(arr1);
    obj.method1(arr2);

    cout << "\nZad2:\n";

    // zad 2
    Account konto = Account("Marek", "123");
    konto.CheckData();
    // Logowanie niepoprawne
    konto.Login("Grzegorz", "aaa");
    konto.CheckData();
    // Logowanie poprawne
    konto.Login("Marek", "123");
    konto.CheckData();
    // Wylogowanie
    konto.Logout();
    konto.CheckData();
    // Ponowne logowanie
    konto.Login("Marek", "123");
    konto.CheckData();
}

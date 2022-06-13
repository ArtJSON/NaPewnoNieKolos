#include <iostream>
#include <array>
#include "Zad1.h"
#include "Zad2.h"
#include "Zad3.h"

using namespace std;

int main()
{
    // zad 1
    cout << "Zad1:\n";
    Zad1 obj;
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

    // zad 2
    cout << "\nZad2:\n";
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

    // zad 3
    cout << "\nZad3:\n";
    ConsoleLogger cl = ConsoleLogger();
    FileLogger fl = FileLogger();
    ServerLogger sl = ServerLogger();

    LogHandler handler = LogHandler();

    // bezposredni log do loggera
    cl.log("wiadomosc do console loggera");
    fl.log("wiadomosc do file loggera");
    sl.log("wiadomosc do server loggera");

    // posredni log przez LogHandler
    handler.Handle(cl, "posredni log prez handler");
}

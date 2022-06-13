#include <iostream>
#include <array>
#include "Zad1.h"

using namespace std;

int main()
{
    cout << "Hello World!\n";

    Zad1 obj;

    // zad 1
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

}

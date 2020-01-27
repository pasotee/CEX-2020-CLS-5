// Problema: Se citeste un numar de la tastura. Sa se stearga prima cifra a acestuia.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int copie = n;
    int ordin = 1;

    while (n > 0)
    {
        ordin = ordin * 10;
        n = n / 10;
    }

    cout << copie % (ordin / 10) << endl;

    return 0;
}
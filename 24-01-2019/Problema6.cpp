// Problema: Se citeste un numar de la tastura. Sa se verifice daca este palindrom.
// Numar palindrom: numar care este egal cu inversul lui.
// Ex: n = 12321 invers = 12321, n==invers => n e palindrom.
// Ex: n = 12345 invers = 54321, n!=invers => n NU e palindrom.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int copie = n;
    int invers = 0;

    while (n > 0)
    {
        int cifra = n % 10;
        invers = invers * 10 + cifra;

        n = n / 10;
    }

    if (copie == invers)
    {
        cout << "Numarul este plaindrom." << endl;
    }
    else
    {
        cout << "Numarul NU este palindrom." << endl;
    }

    return 0;
}
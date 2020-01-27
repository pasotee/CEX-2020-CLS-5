// Problema: Se citeste un numar de la tastura. Sa se afiseze inversul numarului format doar din cifrele impare.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int invers = 0;

    while (n > 0)
    {
        int cifra = n % 10;
        if (cifra % 2 == 1)
        {
            invers = invers * 10 + cifra;
        }

        n = n / 10;
    }

    cout << invers << endl;

    return 0;
}
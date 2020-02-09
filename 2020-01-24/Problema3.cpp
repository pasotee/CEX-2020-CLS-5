// Problema: Se citeste un numar de la tastura. Sa se afiseze prima cifra a acestuia.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    // Vom sterge ultima cifra atata timp cat numarul este mai mare decat 9 (adica are cel mult o cifra).
    while (n > 9)
    {
        n = n / 10;
    }

    cout << n << endl;

    return 0;
}
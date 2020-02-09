//Timp - https://www.pbinfo.ro/probleme/460/timp

#include <iostream>

using namespace std;

int main()
{
    int h, m, x;

    cin >> h >> m >> x;

    // Adaugam minutele
    m = m + x;

    // Daca avem peste 60, le transformam in ore
    h = h + m / 60;

    // Restrange formatul la 0-59 minute si 0-23 ore
    m = m % 60;
    h = h % 24;

    cout << h << " " << m;

    return 0;
}
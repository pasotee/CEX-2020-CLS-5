//Marte1 - https://www.pbinfo.ro/probleme/3180/marte1

#include<iostream>

using namespace std;

int main()
{
    int a, b, c; // valorile monedelor de fiecare tip
    int n, m, p; // numarul monedelor de fiecare tip
    
    cin >> a>> b>> c;
    cin >> n>> m>> p;

    int bani = (a * n)+(b * m)+(c * p);

    cout << bani;
    return 0;
}
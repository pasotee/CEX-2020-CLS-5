//Uciv - https://www.pbinfo.ro/?pagina=probleme&id=1273

#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    int suma = x + y;
    int ultimaCifra = suma % 10;

    cout << ultimaCifra;

    return 0;
}
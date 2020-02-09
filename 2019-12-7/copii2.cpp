//Copii2 - https://www.pbinfo.ro/?pagina=probleme&id=3178

#include <iostream>

using namespace std;

int main()
{
    int fete, baieti, zile;
    cin >> fete >> baieti >> zile;

    int paginiPeZi = fete * 3 + baieti * 2;
    int paginiTotal = paginiPeZi * zile;

    cout << paginiTotal << endl;
    return 0;
}
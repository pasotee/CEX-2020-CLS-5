//Salut - https://www.pbinfo.ro/probleme/2201/salut

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int paginiPerVolum = 300;
    int cifre0la9 = 1 * 9;          // pt numerele 1-9      folosim cate 1 cifra pt 9 numere    => 1 * 9
    int cifre10la99 = 2 * 90;       // pt numerele 10-99    folosim cate 2 cifre pt 90 numere   => 2 * 90
    int cifre100la300 = 3 * 201;    // pt numerele 100-300  folosim cate 3 cifre pt 201 numere  => 3 * 201

    int cifrePerVolum = cifre0la9 + cifre10la99 + cifre100la300;

    int volumeComplete = n / cifrePerVolum;
    int cifreVolumCurent = n % cifrePerVolum;

    if (cifreVolumCurent == 0)
    {
        cout << volumeComplete << " " << paginiPerVolum;
    }
    else if (cifreVolumCurent <= cifre0la9)
    {
        cout << volumeComplete + 1 << " " << cifreVolumCurent;
    }
    else if (cifreVolumCurent <= cifre0la9 + cifre10la99)
    {
        if (cifreVolumCurent % 2 == 1)
        {
            cout << volumeComplete + 1 << " " << (cifreVolumCurent + 9) / 2;
        }
        else
        {
            cout << "IMPOSIBIL";
        }
    }
    else // orice peste 3 cifre. 
    {
        if (cifreVolumCurent % 3 == 0)
        {
            cout << volumeComplete + 1 << " " << (cifreVolumCurent + 9 + 99) / 3;
        }
        else
        {
            cout << "IMPOSIBIL";
        }
    }

    return 0;
}
#include <iostream>

using namespace std;

int main()

    long long n, cif = 0, sumcif = 0, nrcif = 0, rezultat = 0;
    cin>>n;

    while(n > 0)
    {
        cif = n % 10;
        n = n / 10;
        sumcif++;
        nrcif = nrcif + cif;
    }

    while(sumcif > 0)
    {
        sumcif--;
        rezultat=rezultat * 10 + 1;
    }

    rezultat = rezultat * nrcif;
    cout << rezultat;

    return 0;
}
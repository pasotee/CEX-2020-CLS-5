//cifre004 - https://www.pbinfo.ro/probleme/2223/cifre004

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long int sumaCifreN = 0;

    while(n > 0)
    {
        sumaCifreN += n % 10;
        n /= 10;
    }

    // O sa formam un numar al caruia suma cifrelor este egala cu cea a lui n
    // si al carui numar de cifre este egal tot cu suma cifrelor lui n
    // o sa patram fiecare informatie (nr cifre si suma cifre in cate o variabila).
    long long int sumaCifreR = sumaCifreN;
    long long int numarCifreR = sumaCifreN;

    while(numarCifreR > 0)
    {
        if(sumaCifreR > 9)
        {
            cout << 9;
            sumaCifreR -= 9;
        }
        else
        {
            cout << sumaCifreR;
            sumaCifreR = 0;
        }
        
        numarCifreR--;
    }
}
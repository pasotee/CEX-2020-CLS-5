//Sir7 - https://www.pbinfo.ro/probleme/1464/sir7

#include <iostream>

using namespace std;

int main()
{
    long long int P,K;
    cin>>P>>K;

    long long int j=K/2;

    // Consider sirul in 2 subsiruri - unul par si unul impart
    // Cel impar: 9, 39, 69, 99 (+30)
    // cel par: 19, 49, 79, 109 (+30)

    long long int rezultat = P + j * 30;

    // Vedem in ce sir se afla rezultat si il ajutam in functie de asta
    if(K%2==1)
        cout<< rezultat;
    else
        cout<< rezultat - 20;

    return 0;
}
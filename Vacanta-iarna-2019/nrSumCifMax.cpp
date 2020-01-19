//nrSumCifMax - https://www.pbinfo.ro/probleme/3275/nrsumcifmax

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, smaxim;
    cin>> a >> b >> c;

    int sumaA = a%10 + a/10;
    int sumaB = b%10 + b/10;
    int sumaC = c%10 + c/10;

    smaxim = sumaA;

    if (sumaB > smaxim)
        smaxim = sumaB;

    if (sumaC > smaxim)
        smaxim = sumaC;

    if (smaxim == sumaA)
        cout<<a<<" ";
    if (smaxim == sumaB)
        cout<<b<<" ";
    if (smaxim == sumaC)
        cout<<c<<" ";
}
//NumarulDeCifre - https://www.pbinfo.ro/probleme/66/numaruldecifre

#include <iostream>

using namespace std;

int main()
{
    int n,nr;
    cin>>n;
    nr=0;
    if(n==0)
    {
        nr=1;
    }
    
    while(n>0)
    {
        nr++;
        n=n/10;
    }
    
    cout<<nr;
    return 0;
}
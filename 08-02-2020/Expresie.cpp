//Expresie - https://www.pbinfo.ro/probleme/50/expresie

#include <iostream>
using namespace std;

int main()
{
    long long n,s=0,p=1;
    cin>>n;

    for(long long i=1;i<=n;i++)
    {
        p*=i; 
        s+=p;
    }

    cout << "Rezultatul este " << s;
}
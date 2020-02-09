//ProdusCifreImpare - https://www.pbinfo.ro/probleme/65/produscifreimpare

#include <iostream>

using namespace std;

int main()
{
    long long n,r,p=1,impar=0;
    cin>>n;
    
    while (n>0)
    {
        r=n%10;

        if (r%2==1)
            p=p*r;
        if (r%2==1)
            impar=impar+1;

        n=n/10;
    }

    if (impar==0)
        cout<<-1;
    else
        cout<<p;

    return 0;
}
//Inlocuire2 - https://www.pbinfo.ro/probleme/871/inlocuire2

#include <iostream>
using namespace std;

int main()
{
    long long n,c1,c2,t,n2=0,d=1;

    cin>>n>>c1>>c2;
    
    if(n==0&&c1==0)
    {
        cout<<c2;
    }
    else
    {
        while(n>0)
        {
            t=n%10;
            if(t==c1)
                t=c2;
            
            n2=n2+t*d;
            
            d=d*10;
            n=n/10;
        }
        cout<<n2;
    }
    
    return 0;
}
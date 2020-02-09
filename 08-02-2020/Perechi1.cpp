//Perechi1 - https://www.pbinfo.ro/probleme/357/perechi1

#include <iostream>

using namespace std;

int main()
{
    int n,poz = 0;
    cin>>n;

    int min=1000;

    for(int i=1;i<=n;i++)
    {
        int a,b,d;
        cin>>a;
        cin>>b;

        if(a>=b)
        {
            d=a-b;
        }
        else
        {
            d=b-a;
        }
        
        if(d<=min)
        {
            min=d;
            poz=i;
        }
    }

    cout<<poz;
    return 0;
}
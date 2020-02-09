//CifraMaxima - https://www.pbinfo.ro/probleme/68/ciframaxima

#include <iostream>

using namespace std;

int main()
{
    int n,u;
    cin>>n;
    int m=0;
    while(n>0)
    {
        u=n%10;
        n=n/10;
        if(u>m)
        {
            m=u;
        }
    }

    cout<<m;
    
    return 0;
}
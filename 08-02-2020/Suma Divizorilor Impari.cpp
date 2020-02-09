//Suma Divizorilor Impari - https://www.pbinfo.ro/probleme/387/suma-divizorilor-impari

#include <iostream>

using namespace std;


int main()
{
    int n,d,s = 0;

    cin>>n;
    for(d=1;d*d<n;d++)
    {
        if(n%d==0)
        {
            if(d%2==1)
            {
                s=s+d;
            } 

             if((n/d)%2==1)
            {
                s=s+n/d;
            }
        }
    }

    if((d*d==n)&&(d%2==1))
    {
        s=s+d;
    }

    cout<<s;
    return 0;
}
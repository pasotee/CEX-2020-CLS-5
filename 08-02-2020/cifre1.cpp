//cifre1 - https://www.pbinfo.ro/probleme/364/cifre1

#include <iostream>

using namespace std;

int main()
{
    int n,max = 0,x = 0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a, a2;
        cin>>a;
        a2=a;

        int cifra = 0;

        while(a)
        {
            cifra=a%10;
            a=a/10;        
        }

        if(cifra>max || cifra==max && a2>x)
        {
            max=cifra;
            x=a2;
        }
    }

    cout<<x;

    return 0;
}
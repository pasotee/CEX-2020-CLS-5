//Morisca - https://www.pbinfo.ro/probleme/1630/morisca

#include<iostream>

using namespace std;

int main()
{
    int n, i, j;
    cin>>n;
    if(1<=n && n<=10)
    {
        for(i=1; i<=3*n; i++)
        {
            if(i!=1){cout<<endl;}
            for(j=1; j<=3*n; j++)
            {
                if(i<=n)
                {
                    if(j<=i || j>3*n-i)
                    {cout<<"*";}
                    else{cout<<" ";}
                }

                if(i>n && i<=2*n)
                {
                    if(j<=n || j>2*n)
                    {cout<<" ";}
                    else{cout<<"*";}
                }
                if(i>(2*n))
                {
                    if(j<=3*n-i+1 || j>=i)
                    {cout<<"*";}
                    else{cout<<" ";}
                }
            }
        }
    }

    return 0;
}
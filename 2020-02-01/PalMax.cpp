//PalMax - https://www.pbinfo.ro/probleme/280/palmax

#include <iostream>

using namespace std;

int main()
{
    int x,max=0,nra=0,og=0,cif,cx;
    cin>>x;
    while(x!=0)
    {
        cx=x;
        while(cx>0)
        {
            cif=cx%10;
            cx=cx/10;
            og=og*10+cif;
        }

        if(x==og&&x>max)
        {
            max=x;
            nra=0;
        }

        if(x==og&&x==max)
        {
            nra++;
        }

        og=0;
        cin>>x;
    }

    if(max==0)
    {
        cout<<"NU EXISTA";
    }
    else
    {
        cout<<max<<" "<<nra;
    }
    
    return 0;
}
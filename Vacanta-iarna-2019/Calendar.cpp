//Calendar - https://www.pbinfo.ro/probleme/454/calendar

#include <iostream>

using namespace std;

int main ()
{
    int z, l, a;
    cin >> z >> l >> a;
    
    // Suntem siguri ca luna trebuie in intervalul 1-12 orice ar fi
    if(l < 0 || l > 12)
    {
        cout << "NU";
        return 0;
    }

    int nrZileAleLunii = 0;

    // Tratam luna febraruie separat.
    if(l==2)
    {
        // Feburarie are de obicei 28 de zile, mai putin in anii bisecti.
        if( (a%4==0 && a%100!=0) || a%400==0)
        {
            nrZileAleLunii = 29;
        }
        else
        {
            nrZileAleLunii = 28;
        }
    }
    else
    {
        if(l==1|| l==3 ||l==5 ||l==7 || l==8 || l==10 || l==12)
        {
            nrZileAleLunii = 31;
        }
        else
        {
            nrZileAleLunii = 30;
        }
    }

    // Daca si ziua si luna sunt valida, atunci toata data este.
    if(z>=1 && z<=nrZileAleLunii)
    {
        cout<<"DA";
    }
    else
    {
        cout<<"NU";
    }

    return 0;
}
//FiboVerif - https://www.pbinfo.ro/probleme/256/fiboverif

#include <iostream>

 using namespace std;

int main()
{
    int n, x, a=1, b=1, c;
    cin >> n;
    for( ; n ; --n)
    {
        cin >> x;
        if(x==1)
        {
            cout << "DA\n";
        }

        else
        {
            a=1, b=1;
            do
            {
                c = a+b;
                a = b;
                b = c;
            }
            while(c<x);

            if(c==x)
                cout << "DA\n";
            else
                cout << "NU\n";
        }
    }
    
    return 0;
}
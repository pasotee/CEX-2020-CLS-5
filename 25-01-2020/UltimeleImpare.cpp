//UltimeleImpare - https://www.pbinfo.ro/probleme/246/ultimeleimpare

#include<iostream>

using namespace std;

int main ()
{
    int n, a = 0, b = 0, i, x;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        cin >> x;
        if (x % 2 == 1)
        {
            if (a == 0)
            {
                a = x;
            }
            else if (b == 0)
            {
                b = x;
            }
            else
            {
                a = b;
                b = x;
            }
        }
    }

    if (a == 0 || b == 0)
    {
        cout << "Numere insuficiente";
    }
    else
    {
        cout << a << " " << b;
    }

    return 0;
}
//CifreK - https://www.pbinfo.ro/probleme/464/cifrek

#include <iostream>

using namespace std;

int main()
{
    int n, cf, cif, k=0;
    cin >> cf;
    cin >> n;
    while ( n != 0 )
    {
        if ( n % 2 == 0)
        {
            while ( n > 0)
            {
                cif = n % 10;
                if ( cif == cf)
                    k ++;
                n = n / 10;
            }
        }
        cin >> n;
    }
    
    cout << k;

    return 0;
}

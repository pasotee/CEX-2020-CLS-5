//Numarare - https://www.pbinfo.ro/probleme/371/numarare

#include <iostream>

using namespace std;

int main()
{
    int n, S = 0, Sp, x, i = 1, k = 0;
    
    cin>>n;
    cin>>x;
    
    while(x != 0)
    {
        S = S + x % 10;
        x = x / 10;
    }

    while(i < n)
    {
        cin >> x;
        Sp = 0;
        
        while(x != 0)
        {
            Sp = Sp + x % 10;
            x = x / 10;
        }
        
        if(Sp==S)
            k = k + 1;
    
        S = Sp;
    
        i++;
    }

    cout << k << endl;

    return 0;
}
//sir1 - https://www.pbinfo.ro/probleme/243/sir1

#include <iostream>

using namespace std;


int main()
{    
    int n;

    while(cin >> n)
    {
        int x = 0;
        while (n>x)
        {
            n -= x;
            x++;
        }
        
        if(n==0)
            cout << 1;
        else
            cout << x-n+1;

    }
    return 0;
}
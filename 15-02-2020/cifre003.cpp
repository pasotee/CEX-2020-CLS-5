//cifre003 - https://www.pbinfo.ro/probleme/2221/cifre003

#include <iostream>

using namespace std;

int main()
{
    long long n, x = 0;

    cin>>n;
    int y = n%3;

    while(n!=0)
    {
        if(n % 10 % 3 == y)
        {
            x = x+1;
        }

        n = n/10;
    }

    cout<<x;
}
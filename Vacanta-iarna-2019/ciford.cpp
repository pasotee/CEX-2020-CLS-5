//ciford - https://www.pbinfo.ro/probleme/448/ciford

#include <iostream>
using namespace std;

int main()
{
    int a, x, y, z;
    cin>>a;

    x=a/100;
    y=(a/10)%10;
    z=a%10;

    if (x<=y && y<=z)
        cout<<x<<" "<<y<<" "<<z;
    else if (x<=z && z<=y)
        cout<<x<<" "<<z<<" "<<y;
    else if (y<=x && x<=z)
        cout<<y<<" "<<x<<" "<<z;
    else if (y<=z && z<=x)
        cout<<y<<" "<<z<<" "<<x;
    else if (z<=x && x<=y)
        cout<<z<<" "<<x<<" "<<y;
    else
        cout<<z<<" "<<y<<" "<<x;

    return 0;
}
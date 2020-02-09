//CatePare - https://www.pbinfo.ro/probleme/1261/catepare

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int pare = 0;

    while(n!=0)
    {
        if(n%2==0)
        {
            pare=pare+1;
        }
        cin>>n;
    }

    if(pare==0)
    {
        cout<<"NU EXISTA";
    }
    else
    {
        cout<<pare;
    }
    return 0;
}
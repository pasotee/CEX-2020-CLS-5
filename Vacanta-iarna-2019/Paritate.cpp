//Paritate - https://www.pbinfo.ro/probleme/109/paritate

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    
    if(a%2==0)
    {
        cout<<a<<" este par";
    }
    else
    {
        cout<<a<<" este impar";
    }

    return 0;
}
//suma_n - https://www.pbinfo.ro/probleme/2/suma-n

#include <iostream>

using namespace std;

int main()
{    
    int n;
    cin>>n;

    int s=0

    while(n!=0)
    {
        int a;
        cin>>a;
        n--;
        s=s+a;
    }

    cout<<s;
    
    return 0; 
}
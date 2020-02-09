//AfisareNumere2 - https://www.pbinfo.ro/probleme/3231/afisarenumere2

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" ";
    }

    cout<<endl;

    while(n!=0)
    {
        cout<<n<<" ";
        n--;
    }
    
    return 0;
}
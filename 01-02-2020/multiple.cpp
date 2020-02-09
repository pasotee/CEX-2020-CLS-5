//multiple - https://www.pbinfo.ro/probleme/1767/multiple

#include <fstream>

using namespace std;

int main()
{
    ifstream cin("multiple.in");
    ofstream cout("multiple.out");

    int n;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        int a, k;
        cin>>a>>k;

        int rest=a%k;
        int d=k-rest;
        
        a=a+d;

        cout<<a<<" "<<"\n";
    }

    return 0;
}
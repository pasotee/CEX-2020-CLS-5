//max_min - https://www.pbinfo.ro/probleme/1582/max-min

#include<iostream>
using namespace std;
int main()
{
    int cifra;
    int maxi = 1, mini = 83;
    int n;
    
    long long y, maxnr, minnr, m;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cin>>y;
        m=y;
        int s=0;
        
        while(m!=0)
        {
            cifra=m%10;
            s=s+cifra;
            m=m/10;
        }
        
        if(maxi<s)
        {
            maxi=s;
            maxnr=y;
        }

        if(mini>s)
        {
            mini=s;
            minnr=y;
        }
    }
    
    cout<<minnr<<endl;
    cout<<maxnr<<endl;
    
    return 0;
//ConcursPerf - https://www.pbinfo.ro/probleme/2279/concursperf

#include <iostream>

using namespace std;

int main()
{
    int T,i,x,nr_greu=0,nr_usor=0,y,a;

    cin>>T;
    i=1;

    while(i<=T)
    {
        cin>>x>>y;

        for(int j=1;j<=x;j++)
        {
            cin>>a;
            if(a>=y/2)
                nr_usor++;

            if(a<=y/10)
                nr_greu++;
        }

        if(nr_usor==1 && nr_greu==2)
            cout<<"da"<<endl;

        else
            cout<<"nu"<<endl;

        nr_usor=0;
        nr_greu=0;

        i++;
    }

    return 0;
}
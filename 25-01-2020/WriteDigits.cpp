//WriteDigits - https://www.pbinfo.ro/probleme/2911/writedigits

#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long oglindit = 0, copie = n;

    while(n > 0)
    {
        oglindit = oglindit * 10 + n % 10;
        n /= 10;
    }

    do
    {
        int cif=oglindit%10;
        oglindit=oglindit/10;

        if(cif==0)
        {
            cout<<" @@@@@"<<endl;
            cout<<" @   @"<<endl;
            cout<<" @   @"<<endl;
            cout<<" @   @"<<endl;
            cout<<" @@@@@"<<endl<<endl;
        }

        if(cif==1)
        {
            cout<<"   @"<<endl;
            cout<<"  @@"<<endl;
            cout<<"   @"<<endl;
            cout<<"   @"<<endl;
            cout<<" @@@@@"<<endl<<endl;
        }

        if(cif==2)
        {
            cout<<" @@@@"<<endl;
            cout<<" @  @"<<endl;
            cout<<"   @"<<endl;
            cout<<"  @"<<endl;
            cout<<" @@@@"<<endl<<endl;
        }

        if(cif==3)
        {
            cout<<" @@@@@"<<endl;;
            cout<<"     @"<<endl;
            cout<<" @@@@@"<<endl;
            cout<<"     @"<<endl;
            cout<<" @@@@@"<<endl<<endl;
        }

        if(cif==4)
        {
            cout<<" @   @"<<endl;
            cout<<" @   @"<<endl;
            cout<<" @@@@@"<<endl;
            cout<<"     @"<<endl;
            cout<<"     @"<<endl<<endl;
        }

        if(cif==5)
        {
            cout<<" @@@@@"<<endl;
            cout<<" @"<<endl;
            cout<<" @@@@@"<<endl;
            cout<<"     @"<<endl;
            cout<<" @@@@@"<<endl<<endl;
        }

        if(cif==6)
        {
            cout<<" @@@@@"<<endl;
            cout<<" @"<<endl;
            cout<<" @@@@@"<<endl;
            cout<<" @   @"<<endl;
            cout<<" @@@@@"<<endl<<endl;
        }

        if(cif==7)
        {
            cout<<" @@@@"<<endl;
            cout<<"    @"<<endl;
            cout<<"   @@@"<<endl;;
            cout<<"    @"<<endl;
            cout<<"    @"<<endl<<endl;
        }

        if(cif==8)
        {
            cout<<" @@@@@"<<endl;
            cout<<" @   @"<<endl;
            cout<<" @@@@@"<<endl;
            cout<<" @   @"<<endl;
            cout<<" @@@@@"<<endl<<endl;
        }

        if(cif==9)
        {
            cout<<" @@@@@"<<endl;
            cout<<" @   @"<<endl;
            cout<<" @@@@@"<<endl;
            cout<<"     @"<<endl;
            cout<<"     @"<<endl<<endl;
        }
    }while(oglindit > 0);

    while(copie % 10 == 0)
    {
        cout<<" @@@@@"<<endl;
        cout<<" @   @"<<endl;
        cout<<" @   @"<<endl;
        cout<<" @   @"<<endl;
        cout<<" @@@@@"<<endl<<endl;

        copie = copie / 10;
    }
    
    return 0;
}



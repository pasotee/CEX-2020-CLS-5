//SumDivOgl - https://www.pbinfo.ro/probleme/3272/sumdivogl

#include <iostream>

using namespace std;

int main()
{
    int n,i,nr,oglindit = 0,d = 1;
    long long suma = 0;

    cin >> n;
    
    for(i = 0; i < n; i++)
    {
        cin >> nr;
        while(nr > 0)
        {
            int cifra = nr%10;
            nr = nr/10;
            oglindit = oglindit*10 + cifra;
        }

        nr = oglindit;
        while(d*d <= nr)
        {
            if(nr%d == 0)
            {
                suma = suma + d + nr/d;
            }
            d++;
        }

        if((d - 1)*(d - 1) == nr)
        {
            suma = suma - (d - 1);
        }

        oglindit = 0;
        d = 1;
    }

    cout << suma;
    return 0;
}
//Rapunzel - https://www.pbinfo.ro/probleme/2311/rapunzel

#include <fstream>

using namespace std;

ifstream fin("rapunzel.in");
ofstream fout("rapunzel.out");

int main()
{
    long long n;
    int m1,m2;
    fin >> n >> m1 >> m2;

    int metrii = m1 + m2;

    if(n % metrii == 0)
    {
        fout << n / metrii;
    }
    else
    {
        fout << n / metrii + 1;
    }
    return 0;
}
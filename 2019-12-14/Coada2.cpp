//Coada2 - https://www.pbinfo.ro/probleme/2337/coada2

#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("coada2.in");
ofstream fout("coada2.out");

int main()
{
    long long unsigned int x, y, z;
    fin >> x >> y >> z;

    // x persoanele dintre ei.
    // y = x + ahead
    // z = x + behinde

    long long unsigned int ahead = y - x;
    long long unsigned int behinde = z - x;

    if (y <= x || z <= x)
    {
        fout << -1;
    }
    else
    {
        fout << ahead + behinde + x;
    }
}
//Parcare - https://www.pbinfo.ro/probleme/1470/parcare
// Multumiri lui sksks

#include<fstream>

using namespace std;

ifstream fin("parcare.in");
ofstream fout("parcare.out");

int main()
{

    int venitZi, venitLuna, venitOra, venitMinut;
    int plecatZi, plecatLuna, plecatOra, plecatMinut;
    int t,o;

    fin>>venitZi>>venitLuna>>venitOra>>venitMinut;
    fin>>plecatZi>>plecatLuna>>plecatOra>>plecatMinut;

    fin>>t;
    fin>>o;


    // Calculam cate zile a statimpTotal parcat in functie de luna si zi.
    int parcatZile = 0, parcatOre = 0, parcatMinute = 0;
    if(plecatZi < venitZi)
    {
        if(venitLuna==1 || venitLuna==3 || venitLuna==5 || venitLuna==7 || venitLuna==8 || venitLuna==10 || venitLuna==12)
            parcatZile = plecatZi + 31 - venitZi;
        else if(venitLuna==4 || venitLuna==6 || venitLuna==9 || venitLuna==11)
            parcatZile = plecatZi + 30 - venitZi;
        else if(venitLuna==2)
            parcatZile = plecatZi + 28 - venitZi;
    }
    else 
    {
        parcatZile = plecatZi - venitZi;
    }

    // Calculam numarul de ore petrecute parcat.
    if(plecatOra < venitOra)
    {
        parcatZile--;

        if(plecatMinut >= venitMinut)
            parcatOre = plecatOra + 24 - venitOra;
        else if(plecatMinut < venitMinut)
            parcatOre = plecatOra + 24 - venitOra - 1;
    }
    else
    {
        if(plecatMinut >= venitMinut)
            parcatOre = plecatOra - venitOra;
        else if(plecatMinut < venitMinut)
            parcatOre = plecatOra - venitOra - 1;
    }

    // Calculam numarul de minute petrecute parcat.
    if(plecatMinut < venitMinut)
        parcatMinute = plecatMinut + 60 - venitMinut;
    else if(plecatMinut >= venitMinut)
        parcatMinute = plecatMinut - venitMinut;


    // Calculam timpul total in minute.
    int timpTotal= (parcatZile * 60 * 24) + (parcatOre * 60) + parcatMinute;

    if(o==1)
    {
        fout<<timpTotal;
    }
    else if(o==2)
    {
        if(timpTotal<15) // parcare gratis sub 15 minute
        {
            fout<<"0";
        }
        else
        {
            int dePlata = 0;
            if(timpTotal % 60 == 0)
                dePlata = (timpTotal / 60) * t;
            else
                dePlata = (timpTotal / 60 + 1) * t;

            fout << dePlata;
        }
    }

    return 0;
}
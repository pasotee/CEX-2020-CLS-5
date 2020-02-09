//Marte3 - https://www.pbinfo.ro/?pagina=probleme&id=3181

#include <iostream>

using namespace std;

int main()
{

    int zilePeAn, orePeZi, antene;
    cin >> zilePeAn >> orePeZi >> antene;

    // O antene creste intr-o ora deci vom folosi numarul de antene drept numarul total de ore necesare.

    // Calculam numarul de ore intr-un an pentru a calcula numarul de ani necesari in functie de numarul total de ore.
    int orePeAn = zilePeAn * orePeZi;
    int durataAni = antene / (orePeAn);

    // Scadem antenele pe care le-am crescut deja in anii.
    antene = antene - durataAni * orePeAn;
    int durataZile = antene / orePeZi;

    // Scadem antenele pe care le-am crescut deja in ore
    antene -= durataZile * orePeZi;
    int durataOre = antene;

    cout << durataAni << endl << durataZile << endl << durataOre;

    return 0;
}
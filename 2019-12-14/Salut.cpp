//Salut - https://www.pbinfo.ro/probleme/2201/salut

#include <iostream>

using namespace std;

int main()
{
    long long int n; // Folosim tipul long long int pentru a acoperi restrictiile si precizarile problemei. 
    cin>>n;

    // Deoarece fiecare da mana cu cei de inaintea lui, vom avea 1 + 2 + 3 ... + n strangeri
    // Putem prin urmare aplica suma lui gauss.

    int total = (n-1)*(n)/2; 

    cout << total;
    
    return 0;
}
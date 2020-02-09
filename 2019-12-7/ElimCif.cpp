//ElimCif - https://www.pbinfo.ro/?pagina=probleme&id=209

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    // Un numar de 3 cifre (ABC) poate sa fie scris ca 100 * A + 10 * B + C
    // Prin urmare numarul format elimand cifra din mijloc va avea forma 10*A+C

    int primaCifra = (n / 100);
    int ultimaCifra = (n % 10);

    int numar = primaCifra * 10 + ultimaCifra;

    cout << numar;
    return 0;
}
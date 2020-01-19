//5numere - https://www.pbinfo.ro/probleme/559/5numere

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    
    if( a > d && a > e && b > d && b > e && c > d && c > e )
        cout << a + b + c;
    if( a > c && a > e && b > c && b > e && d > c && d > e)
        cout << a + b + d;
    if( a > d && a > c && b > d && b > c && e > d && e > c )
        cout << a + b + e;
    if( a > b && a > e && c > b && c > e && d > b && d > e )
        cout << a + c + d;
    if( a > b && a > d && c > b && c > d && e > b && e > d )
        cout << a + c + e;
    if( a > b && a > c && d > b && d > c && e > b && e > c )
        cout << a + d + e;
    if( b > a && b > e && c > a && c > e && d > a && d > e )
        cout << b + c + d;
    if( b > a && b > d && c > a && c > d && e > a && e > d )
        cout << b + c + e;
    if( b > a && b > c && d > a && d > c && e > a && e > c )
        cout << b + d + e;
    if( c > a && c > b && d > a && d > b && e > a && e > b )
        cout << c + d + e;

    return 0;
}
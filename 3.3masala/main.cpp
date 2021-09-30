// Muallif: Nurqulov Nodirbek
// Sana: 15.09.2021  18:18
// Maqsad: Geron formulasidan foydalangan holda uchburchakning yuzini aniqlash

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    float a, b, c, p, s;

    cout << "a="; cin >> a;
    cout << "b="; cin >> b;
    cout << "c="; cin >> c;

    p = (a + b + c) / 2;
    s = sqrt( p * (p - a) * (p - b) * (p - c));

    cout << "p=" << p << endl;
    cout << "s=" << s << endl;

    cout << setprecision(2) << fixed << s << endl;

    return 0;
}

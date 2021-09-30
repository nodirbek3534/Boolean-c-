//Muallif: Nurqulov Nodirbek
//Sana: 21.09.2021 yil
//Maqsad: Uch xonali son berilgan. Uning raqamlarini teskari tartibda yozishdan hosil bo'lgan sonni aniqlovchi programma tuzilsin

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e;

    cout << "Uch xonali son kiriting\n";
    cout << "a="; cin >> a;

    b = a / 100;
    c = (a / 10) % 10;
    d = a % 10;
    e = b + 10 * c + 100 * d;

    cout << "e=" << e << endl;

    return 0;
}

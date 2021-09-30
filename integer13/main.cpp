//Muallif: Nurqulov Nodirbek
//Sana: 21.09.2021 yil
//Maqsad: Uch xonali son berilgan. Uning chapdan birinchi raqamini o'chirib o'ng tarafiga yozishdan hosil bo'lgan sonni aniqlovchi programma tuzilsin

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
    e = 100 * c + 10 * d + b;

    cout << "e=" << e << endl;

    return 0;
}

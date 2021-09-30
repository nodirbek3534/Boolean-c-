//Muallif: Nurqulov Nodirbek
//Sana: 21.09.2021 yil
//Maqsad: Uch xonali son berilgan. Uning o'nliklar xonasidagi raqam bilan birliklar xonasidagi raqamni almashtirishdan hosil bo'lgan sonni aniqlovchi programma tuzilsin?

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e;

    cout << "Uch xonali son kiriting\n";
    cout << "a="; cin >> a;

    b = (a / 10) % 10;
    c = a % 10;
    d = a / 100;
    e = 100 * d + 10 * c + b;

    cout << "e=" << e << endl;
    return 0;
}

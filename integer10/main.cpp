//Muallif: Nurqulov Nodirbek
//Sana: 21.09.2021 yil
//Maqsad: Uch xonali son berilgan. Oldin uning birliklar xonasidagi raqamini so'ng o'nliklar xonasidagi raqamini aniqlovchi programma tuzilsin?

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;

    cout << "Uch xonali son kiriting\n";
    cout << "a= "; cin >> a;

    b = a % 10;
    c = a / 100;
    d = (a / 10) - 10 * c;

    cout << "b= " << b << endl;
    cout << "d= " << d << endl;

    return 0;
}

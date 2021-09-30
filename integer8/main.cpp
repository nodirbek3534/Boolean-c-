//Muallif: Nurqulov Nodirbek
//Sana: 21.09.2021 yil
//Maqsad: Ikki xonali son berilgan. Uning raqamlari o'rnini almashtirishdan hosil bo;lgan sonni aniqlovchi programma tuzilsin?

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;

    cout << " ikki xonali son kiriting\n";
    cout << "a= "; cin >> a;

    b = a / 10;
    c = a % 10;
    d = 10 * c + b;

    cout << "d= " << d << endl;
    return 0;
}

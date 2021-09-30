//Muallif: Nurqulov Nodirbek
//Sana: 21.09.2021 yil
//Maqsad: Ikki xonali son berilgan uning raqamlari yig'indisini aniqlovchi programma tuzilsin?

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;

    cout << "Ikki xonali musbat son kiriting\n";
    cout << "a= "; cin >> a;

    b = a / 10;
    c = a % 10;
    d = b + c;

    cout << "d= " << d << endl;

    return 0;
}

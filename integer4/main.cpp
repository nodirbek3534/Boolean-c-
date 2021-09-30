//Muallif: Nurqulov Nodirbek
//Sana: 20.09.2021 yil
//Maqsad: a va b (a > b) musbat sonlari berilgan. a kesmada b kesmani necha marta joylashtirish mumkinligini aniqlovchi programma tuzilsin.

#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "a="; cin >> a;
    cout << "b="; cin >> b;

    a = a / b;

    cout << "a=" << a << endl;
    return 0;
}

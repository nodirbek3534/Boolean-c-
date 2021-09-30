//Muallif: Nurqulov Nodirbek
//Sana: 20.09.2021 yil
//Maqsad: a va b (a > b) musbat sonlari berilgan. a kesmada b kesmani necha marta joylashtirish mumkin. a kesmada b kesmaning joylashmagan qismini aniqlovchi programma tuzilsin?

#include <iostream>

using namespace std;

int main()
{
    int a, b, x; // bu yerda (a > b)

    cout << "a="; cin >> a;
    cout << "b="; cin >> b;

    x = a - (a / b) * b;
    a = a / b;

    cout << "x=" << x << endl;
    cout << "a=" << a << endl;

    return 0;
}

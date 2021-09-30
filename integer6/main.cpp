//Muallif: Nurqulov Nodirbek
//Sana: 20.09.2021 yil
//Maqsad: Ikki xonali son berilgan oldin uning o'nliklar xonasidagi raqamni so'ng birlar xonasidagi raqamni chiqaruvchi programma tuzilsin?
#include <iostream>

using namespace std;

int main()
{
    // a ikki xonali son
    int a, b, c;

    cout << "Ikki xonali son kiriting\n";
    cout << "a= "; cin >> a;


    b = a / 10;
    c = a % 10;

    cout << "b= " << b << endl;
    cout << "c= " << c << endl;

    return 0;
}

//Muallif: Nurqulov Nodirbek
//Sana: 20.09.2021
//Maqsad: Faylning hajmi baytlarda berilgan. Bo;lib butunni olish operatsiyasidan foydalanib fayl hajmining to'liq kilobaytlarda ifodalovchi programma tuzilsin.
#include <iostream>

using namespace std;

int main()
{
    //Fayl hajmi baytlarda berilgan
    int a;

    cout << "a="; cin >> a;

    a = a / 1024;

    cout << "a=" << a << endl;
    return 0;
}

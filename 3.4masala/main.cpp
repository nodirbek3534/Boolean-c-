// Muallif: Nurqulov Nodirbek
// Sana: 15.09.2021  19:30
// Maqsad: To'g'ri burchakli uchburchakning ikkinchi kateti va unga ichki chizilgan aylana radiusini aniqlash

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c, r;

    cout << "a="; cin >> a;
    cout << "c="; cin >> c;

    b = sqrt(c * c - a * a);
    r = (a + b + c) / (a * b);

    cout << "b=" << b << endl;
    cout << "r=" << r << endl;

    return 0;
}

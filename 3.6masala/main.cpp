// Muallif: Nurqulov Nodirbek
// Sana: 15.09.2021  19:30
// Maqsad: ikki nuqta orasidagi masofani aniqlash

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x1, x2, y1, y2;
    float d;

    cout << "x1="; cin >> x1;
    cout << "x2="; cin >> x2;
    cout << "y1="; cin >> y1;
    cout << "y2="; cin >> y2;

    d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

    cout << "d=" << d << endl;

    return 0;
}

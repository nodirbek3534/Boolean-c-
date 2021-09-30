// Muallif: Nurqulov Nodirbek
// Sana: 15.09.2021  19:30
// Maqsad: arifmetik progressiyaning n ta hadi yig'indisini hisoblash

#include <iostream>

using namespace std;

int main()
{
    float a, d, s;
    int n;

    cout << "a="; cin >> a;
    cout << "d="; cin >> d;
    cout << "n="; cin >> n;

    s = (2 * a + d * (n - 1)) * n / 2;

    cout << "s=" << s << endl;

    return 0;
}

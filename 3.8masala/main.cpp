// Muallif: Nurqulov Nodirbek
// Sana: 15.09.2021  20:33
// Maqsad: kasr qismdan keyin 4 ta xona aniqlikda aniqlovchi programma tuzilsin

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float a, b;

    cout << "a sonini b soniga bo'lib 4 xona aniqlikda chiqarish" << endl;
    cout << "a= "; cin >> a;
    cout << "b= "; cin >> b;

    a = a / b;

    cout << "a=" << a << endl;
    cout << setprecision(4) << fixed << a << endl;

    return 0;
}


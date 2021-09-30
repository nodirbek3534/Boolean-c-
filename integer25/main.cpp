//Muallif: Nurqulov Nodirbek
//Sana: 21.09.2021 yil
//Maqsad: Uch xonali son berilgan. Uning o'nliklar xonasidagi raqam bilan birliklar xonasidagi raqamni almashtirishdan hosil bo'lgan sonni aniqlovchi programma tuzilsin?

#include <iostream>

using namespace std;

int main()
{


    int k;

    cout << "(1 < k < 365): k= "; cin >> k;

    k = (k + 3) % 7;

    cout << k << endl;
    return 0;
}

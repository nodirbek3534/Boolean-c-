//Muallif: Nurqulov Nodirbek
//Sana: 21.09.2021 yil

#include <iostream>

using namespace std;

int main()
{
    long int n, minute, secund;

    cout << "n= "; cin >> n;

    //calculate minute(m)
    minute = (n / 60);

    //calculate secund(s)
    secund = n % 60;

    cout << "minute= " << minute << endl;
    cout << "secund= " << secund << endl;

    return 0;
}

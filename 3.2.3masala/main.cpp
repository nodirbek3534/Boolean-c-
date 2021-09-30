// Muallif: Nurqulov Nodirbek
// Sana: 15.09.2021  18:18
// Maqsad: n natural soni berilgan (9<n<100) uning birinchi raqamini aniqlash

#include <iostream>

using namespace std;

int main()
{
    int n, birinchi, oxirgi, sum;

    cout << "n="; cin >> n;

    birinchi = n / 10;
    oxirgi = n % 10;
    sum = birinchi + oxirgi;

    cout << "birinchi= " << birinchi << endl;
    cout << "oxirgi=   " << oxirgi << endl;
    cout << "sum=           " << sum << endl;

    return 0;
}

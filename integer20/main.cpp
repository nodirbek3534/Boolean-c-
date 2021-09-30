#include <iostream>

using namespace std;

int main()
{
    long int n, hour;

    cout << "n= "; cin >> n;

    //Calculate hour(m)
    hour = (n / 3600);

    cout << "hour= " << hour << endl;
    return 0;
}

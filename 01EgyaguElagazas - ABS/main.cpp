#include <iostream>

using namespace std;

int main()
{
    int a;

    setlocale(LC_ALL,"hun");
    cout << "Abszolut érték számítás"<<endl;
    cout << "A szám? ";
    cin >> a;

    if (a<0)
       a=-a;

    cout << "ABS: " << a << endl;
    return 0;
}


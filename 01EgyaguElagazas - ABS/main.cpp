#include <iostream>

using namespace std;

int main()
{
    int a;

    setlocale(LC_ALL,"hun");
    cout << "Abszolut �rt�k sz�m�t�s"<<endl;
    cout << "A sz�m? ";
    cin >> a;

    if (a<0)
       a=-a;

    cout << "ABS: " << a << endl;
    return 0;
}


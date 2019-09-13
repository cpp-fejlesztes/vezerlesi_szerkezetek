#include <iostream>

using namespace std;

#define ABETU 'a'

int main()
{
    setlocale(LC_ALL,"hun");

    char ch;
    cout<<"A karakter? ";
    cin>>ch;
    if (ch == ABETU)
        cout<<"A betû lett megadva..."<<endl;
    return 0;
}


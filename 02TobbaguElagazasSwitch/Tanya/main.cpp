#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

enum allatok {LO, TEHEN, KUTYA, MACSKA, BARANY};

int main()
{
    setlocale(LC_ALL,"hun");
    int vel;
    srand(time(NULL));
    do
    {
        vel=rand()%6;
        switch(vel)
        {
            case LO:
                cout<<"Nyi-ha-ha"<<endl;
                break;
            case TEHEN:
                cout<<"M���"<<endl;
                break;
            case KUTYA:
                cout<<"Vau-vau"<<endl;
                break;
            case MACSKA:
                cout<<"Mia����"<<endl;
                break;
            case BARANY:
                cout<<"Beeeee"<<endl;
                break;
        }
    } while(vel<5);
    cout<<"A tany�n este lett";
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
double a,b,e;
char op;
cin>>a>>op>>b;
if(op == '+')
    e = a + b;
else if(op == '-')
    e = a - b;
else if(op == '*')
    e = a * b;
else if(op == '/')
		e = a / b;
else {
    cout<<"Hibás mûvelet!"<<endl;
    return 0;
}
    cout<<a<<op<<b<<'='<<e<<endl;
    return 0;*
}

#include <iostream>
using namespace std;
template <class x,class y> void func(x a,y b,char c)
{

    switch(c)
    {
        case '+':
        cout<<a+b;
        break;
        case '-':
        cout<<a-b;
        break;
        case '/':
        cout<<a/b;
        break;
        case '*':
        cout<<a*b;
        break;
    }
}
int main()
{
    func(1,2.3,'+');
}
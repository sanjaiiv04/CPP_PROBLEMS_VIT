#include <iostream>
using namespace std;
template <class x,class y> void func(x a,y b)
{
    cout<<"Addition of a and b:"<<a+b<<endl;
}
int main()
{
    int a1=10,b1=20;
    float a=12.34,b=20.59;
    func(a1,b1);
    func(a,b);
}
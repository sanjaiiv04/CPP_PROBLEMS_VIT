#include <iostream>
using namespace std;
template<class T1> void func(T1 a)
{
    cout<<"You have entered:"<<a<<endl;
}
template<class T2,class T3> void func(T2 b,T3 c)
{
    cout<<"Hey you entered:"<<b<<" "<<c<<endl;
}
int main()
{
    int a=1,b=2,c=3;
    func(a);
    func(b,c);
    float x=2.2,y=3.3,z=4.4;
    func(x);
    func(y,z);
}
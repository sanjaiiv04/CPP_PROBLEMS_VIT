#include <iostream>
using namespace std;
template <class t>void add(t a,t b)
{
    cout<<a+b<<endl;
}
int main()
{
    int a=10,b=20;
    float c=2.3,d=3.5;
    add(a,b);
    add(c,d);
}
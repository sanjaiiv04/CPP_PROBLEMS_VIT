#include <iostream>
using namespace std;
class A
{
    public:
    int x;
    A(int a)
    {
        x=a;
    }
    friend class B;
};
class B
{
    public:
    int y;
    B(int b)
    {
        y=b;
    }
    void func(A &p)
    {
        int sum=0;
        sum+=p.x + y;
        cout<<"sum:"<<sum;
    }
};
int main()
{
    A obj1(20);
    B obj2(10);
    obj2.func(obj1);
}
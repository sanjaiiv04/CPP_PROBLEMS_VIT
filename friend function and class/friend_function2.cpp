#include <iostream>
using namespace std;
class B;//when using two classes do forward declaration
class A
{
    public:
    int x;
    A(int a)
    {
        x=a;
    }
    friend void func(A &p,B &q);//the friend function acts as bridge between the two classes
};
class B
{
    public:
    int y;
    B(int b)
    {
        y=b;
    }
    friend void func(A &p,B &q);
};
void func(A &p,B &q)
{
    if (p.x==q.y) cout<<"equal";
    else cout<<"not equal";
}
int main()
{
    A obj1(2);
    B obj2(2);
    func(obj1,obj2);
}
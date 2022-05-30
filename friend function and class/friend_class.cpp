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
    friend class B;//B is friend class of A. Hence it can access the variables and functions of A.
};
class B
{
    public:
    int y;
    B(int b)
    {
        y=b;
    }
    void func(A &a)//using the object of class A as argument.This does not give error because the class B is a friend of A.
    {
        cout<<"Value of x:"<<a.x;
        cout<<"Value of y:"<<y;
    }
};
int main()
{
    A obj1(10);
    B obj2(20);
    obj2.func(obj1);
}
#include <iostream>
using namespace std;
class A
{
    public:
    int a,b,c;
    void func1()
    {
        cout<<"addition:"<<a+b+c<<endl;
    }
};
class B:public A
{
    public:
    void func2()
    {
        cout<<"substraction:"<<a-b-c<<endl;
    }
};
class C:public B
{
    public:
    C(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void func3()
    {
        cout<<"multiplication:"<<a*b*c<<endl;
    }
};
int main()
{
    int a,b,c;
    cout<<"Enter n1:"; cin>>a;
    cout<<"Enter n2:"; cin>>b;
    cout<<"Enter n3:"; cin>>c;
    C obj(a,b,c);
    obj.func1();
    obj.func2();
    obj.func3();
}
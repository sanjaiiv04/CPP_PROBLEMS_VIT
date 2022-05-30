#include <iostream>
#include <cstring>
using namespace std;
class A
{
    public:
    virtual void func(string a)
    {
        cout<<"The string:"<<a<<endl;
        cout<<"Length of string:"<<a.length()<<endl;
    }
};
class B:public A
{
    public:
    void func(string a)
    {
        cout<<"There is no string..";
    }
};
int main()
{
    string x;
    cout<<"Enter string:"; cin>>x;
    A *obj1;
    B obj2;
    obj1 = &obj2;
    obj1->func(x);
}
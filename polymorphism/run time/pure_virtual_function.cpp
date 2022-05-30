#include <iostream>
using namespace std;
class base
{
    public:
    virtual void func(int a)=0;
};
class derive:public base
{
    public:
    void func(int a)
    {
        cout<<"inside derived class..";
    }
};
int main()
{
    //base obj; - you cannot create a object for base classes that have a pure virtual function
    base *obj;
    derive obj2;
    obj = &obj2;
    obj->func(4);

}
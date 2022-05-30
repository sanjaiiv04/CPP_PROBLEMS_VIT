#include <iostream>
using namespace std;
class base
{
    public:
    void func()
    {
        cout<<"Sanjaii";
    }
};
class derive:public base
{
    public:
    void func()
    {
        cout<<"This is sanjaii inside derived class";
    }
};
int main()
{
    derive obj;
    obj.func();
}
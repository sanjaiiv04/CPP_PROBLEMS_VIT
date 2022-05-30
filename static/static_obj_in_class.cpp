#include <iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"Constructor";
    }
    ~A()
    {
        cout<<"Destructor";
    }
};
void func()
{
    static A obj;
}
int main()
{
    int x=0;
    if (x==0)
    {
        func();
    }
    cout<<"END";
}
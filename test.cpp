#include <iostream>
using namespace std;
class A
{
    public:
    int test;
    A(int x)
    {
        test=x;
        cout<<"TEST:"<<test;
    }
    ~A()
    {
        cout<<"Destructor";
    }
    int func()
    {
        int a=20;
        cout<<"A:"<<a;
    }
};
int main()
{
    
    for (int i=0;i<3;i++)
    {
        static A obj(10);
    }
}
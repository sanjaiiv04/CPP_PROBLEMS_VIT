#include <iostream>
using namespace std;
class A
{
    public:
    static int x;
    static void func()
    {
        cout<<"static variable:"<<x;
    }
};
int main()
{
    A obj;
    obj.func();
}

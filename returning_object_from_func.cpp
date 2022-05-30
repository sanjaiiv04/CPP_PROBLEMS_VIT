#include <iostream>
using namespace std;
class A
{
    public:
    int x,y;
};
A func()
{
    A obj;
    obj.x=10; obj.y=20;
    cout<<"Value of x:"<<obj.x<<endl;
    cout<<"Value of y:"<<obj.y<<endl;
    return obj;
}
int main()
{
    A obj1;
    obj1=func();
}
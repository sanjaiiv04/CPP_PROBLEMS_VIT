#include <iostream>
using namespace std;
template <class T>
class A
{
    public:
    T a,b;
    A(T x,T y)
    {
        a=x; b=y;
    }
    void add()
    {
        cout<<a+b;
    }
};
int main()
{
    A<int> obj(2,3);
    obj.add();
}
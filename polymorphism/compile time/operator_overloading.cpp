#include <iostream>
using namespace std;
class complex
{
    int real,imag;
    public:
    complex(int a,int b)
    {
        real=a; imag=b;
    }
    void operator +(complex &obj)
    {
        int x = real + obj.real;
        int y = imag + obj.imag;
        cout<<x<<"+"<<"j"<<y;
    }
};
int main()
{
    complex obj1(2,3), obj2(3,4);
    obj1+obj2;
}
#include <iostream>
#include <cstring>
using namespace std;
class x
{
    public:
    void func(int a,int b)
    {
        cout<<"Before swapping integers, a:"<<a<<" and b:"<<b;
        int temp;
        temp=a;
        a=b;
        b=temp;
        cout<<"After swapping, a:"<<a<<" and b:"<<b;
    }
    void func(char x,char y)
    {
        cout<<"Before swapping strings a:"<<x<<" and b:"<<y;
        char temp;
        temp=x;
        x=y;
        y=temp;
        cout<<"After swapping strings a:"<<x<<" and b:"<<y;
    }
};
int main()
{
    x obj;
    int x,y;
    char a,b;
    cout<<"x:"; cin>>x;
    cout<<"y:"; cin>>y;
    cout<<"a:"; cin>>a;
    cout<<"b:"; cin>>b;
    obj.func(x,y);
    obj.func(a,b);
}
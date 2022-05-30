#include <iostream>
using namespace std;
class A
{
    public:
    string no;
    A(string x)
    {
        no=x;
    }
    friend void func(A &a);
};
void func(A &a)
{
    int len=a.no.length();
    cout<<"Country code:";
    for (int i=0;i<len;i++)
    {
        if (i>=0 && i<=2) cout<<a.no[i];
    }
}
int main()
{
    string tel;
    cout<<"Enter telephone no:"; cin>>tel;
    A obj(tel);
    func(obj);
}

#include <iostream>
using namespace std;
class strings
{
    public:
    string a;
    strings(string x)
    {
        a=x;
    }
    void operator *(strings &obj)
    {
        string s = a+obj.a;
        cout<<"Concatenation of s1 and s2:"<<s;
    }
};
int main()
{
    strings s1("sanjaii"), s2("vit");
    s1 * s2;
}
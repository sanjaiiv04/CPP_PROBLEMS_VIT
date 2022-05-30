//public vision scope single level inheritance
#include <iostream>
using namespace std;
class acc
{
    public:
    int salary=20;
};
class program:public acc //the public members of class acc becomes public members of class program
{
    public:
    int days=10;
    void func()
    {
        cout<<"salary:"<<salary<<endl;
        cout<<"days:"<<days;
    }
};
int main()
{
    program obj;
    obj.func();
}
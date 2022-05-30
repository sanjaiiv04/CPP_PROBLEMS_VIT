/* write a program using object as argument to function
which replaces '-' by '_' of a string */ 
#include <iostream>
using namespace std;
class A
{  
    public:
        string input;
        A()
        {
            cout<<"Enter string:"; cin>>input;
        }
       
};
void func(A a)
{
    cout<<"You entered:"<<a.input<<"\n";
    for (int i=0;i<a.input.length();i++)
    {
        if (a.input[i]=='-') a.input[i]='_';
    }
    cout<<"After replacing:"<<a.input;
}
int main()
{
    A obj;
    func(obj);
}

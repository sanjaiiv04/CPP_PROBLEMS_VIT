#include <iostream>
using namespace std;
class Car
{
    private:
        int data;
    public:
        void func(int x) /*although the variable data is private and cannot be accessed,
        the function 'func' which is in public can access the variable data
        because it is in declared in the same class. Hence we can access the private variable 
        data indirectly through the function func. */
        {
            data = x;
        }
        void func2()
        {
            cout<<"Data:"<<data<<"\n";
        }
};
int main()
{
    Car x;
    x.func(1);
    x.func2();
}
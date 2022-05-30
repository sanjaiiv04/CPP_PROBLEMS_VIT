#include <iostream>
using namespace std;
class Emp
{
    public:
        Emp()
        {
            cout<<"constructor invoked.."<<"\n";
        }
        ~Emp()
        {
            cout<<"destructor invoked.."<<"\n";
        }
};
int main()
{
    Emp x;//when the object is created the constructor is invoked.
    // when the scope in which the object is defined ends the destructor is invoked.
}
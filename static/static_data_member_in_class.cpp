#include <iostream>
using namespace std;
class A
{
    public:
        static int i;//when data member is static it should be declares outside the class
};
int A::i = 1; 
int main()
{
    A x,y;
    cout<<x.i<<" "<<y.i;
}
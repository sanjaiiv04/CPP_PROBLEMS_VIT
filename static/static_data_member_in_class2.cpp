#include <iostream>
using namespace std;
class acc
{
    public:
        int x;
        static int y;
        acc(int a)
        {
            this->x = a;
        }
        void display()
        {
            cout<<x<<y;
        }
};
int acc::y=10;
int main()
{
    acc a1=acc(1);
    acc a2=acc(2);
    a1.display();
    a2.display();
}
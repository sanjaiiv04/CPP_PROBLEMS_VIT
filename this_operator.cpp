#include <iostream>
using namespace std;
class Emp
{
    public:
        int id;
        string name;
        Emp(int x,string y)
        {
            this->id = x;
            this->name = y;
        }
        void display()
        {
            cout<<"ID:"<<id<<"Name:"<<name;
        }
};
int main()
{
    Emp a=Emp(1,"sanjaii");
    a.display();
}
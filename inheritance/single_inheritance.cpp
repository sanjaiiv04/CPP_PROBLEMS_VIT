#include <iostream>
using namespace std;
class A
{
    private:
    int a=4;
    int b=5;

    public:
    void multiply()
    {
        cout<<"Multiplication:"<<a*b; //we know inside the class functions can access private data members
    }
};
class B:private A //the public function multiply() of class A becomes private in class B
{
    private:

    public:
    void display() // to access the private function multiply() inside the class B another class display() is used.
    {
        multiply();
    }
};
int main()
{
    B obj;
    obj.display();
}
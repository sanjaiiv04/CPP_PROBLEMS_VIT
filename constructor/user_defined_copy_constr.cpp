#include <iostream>
using namespace std;
class test
{
    public:
    int x;
    test();
    test(int a)
    {
        x=a;
    }
    test (const test &t2)
    {
        x=t2.x;
    }
};
int main()
{
    //to create deep copy: use user defined copy constructor
    test obj1(10);
    test obj2(obj1);//copy constructor
    cout<<"For obj1:"<<obj1.x<<endl;
    cout<<"For obj2:"<<obj2.x<<endl;
    obj1.x=2;
    cout<<"After changing the value of x for obj1:"<<obj1.x<<endl;
    cout<<"for obj2:"<<obj2.x<<endl;//change in obj1 cannot change obj2
    test obj3(40);
    test obj4=obj3;//assignment operator
    cout<<"For obj3:"<<obj3.x<<endl;
    cout<<"For obj4:"<<obj4.x<<endl;
    obj3.x=4;
    cout<<"After changing value of x in obj3:"<<obj3.x<<endl;
    cout<<"for obj4:"<<obj4.x;//change in object3 cannot change obj4
}
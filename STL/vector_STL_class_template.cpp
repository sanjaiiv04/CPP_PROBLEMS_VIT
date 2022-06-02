#include <iostream>
#include <list>
#include <vector>
using namespace std;
template <class T> 
class A
{
    public:
    vector <T> obj;
    int n;
    A(int a)
    {
        n=a;
    }
    void add_data()
    {
        T x;
        for (int i=0;i<n;i++)
        {
            cout<<"Enter data:"; cin>>x;
            obj.push_back(x);
        }
    }
    void print_data()
    {
        for (int i=0;i<n;i++)
        {
            cout<<obj[i]<<" ";
        }
    }
};
int main()
{
    int c,choice;
    cout<<"Enter no of data:"; cin>>c;
    cout<<"Enter your choice of datatype:"; cin>>choice;
    if (choice==1) 
    {
        A<int> obj1(c);
        obj1.add_data();
        obj1.print_data();
    }
    else if (choice==2)
    {
        A<float> obj2(c);
        obj2.add_data();
        obj2.print_data();
    }
    else cout<<"Invalid input..";
}
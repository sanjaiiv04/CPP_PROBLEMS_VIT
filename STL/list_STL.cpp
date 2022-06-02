#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l1;
    list<int> l2;
    list<int>::iterator t1;//in list containers to iterate a list you cannot use [i] instead you use iterators t1.begin() and t1.end()
    list<int>::iterator t2;
    int a,b;
    for (int i=0;i<5;i++)
    {
        cout<<"Enter element for list1:"; cin>>a;
        l1.push_back(a);
    }
    for (int i=0;i<5;i++)
    {
        cout<<"Enter element for list2:"; cin>>b;
        l2.push_back(b);
    }
    cout<<"Sorting list1..."<<endl;
    l1.sort();
    for(t1=l1.begin();t1!=l1.end();t1++)
    {
        cout<<*t1<<" ";
    }
    cout<<endl;
    cout<<"Sorting list2..."<<endl;
    l2.sort();
    for(t2=l2.begin();t2!=l2.end();t2++)
    {
        cout<<*t2<<" ";
    }
    l1.swap(l2);
    cout<<endl<<"after swapping..."<<endl;
    cout<<"list1.."<<endl;
    for(t1=l1.begin();t1!=l1.end();t1++)
    {
        cout<<*t1<<" ";
    }
    cout<<endl;
    cout<<"list2.."<<endl;
    for(t2=l2.begin();t2!=l2.end();t2++)
    {
        cout<<*t2<<" ";
    }
    
}
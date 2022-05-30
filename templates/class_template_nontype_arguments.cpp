#include <iostream>
using namespace std;
template <class T,int n>
class arr
{
    public:
    T arr[n];
    void insert()
    {
        for (int i=0;i<n;i++)
        {
            int el;
            cout<<"Enter element:"; cin>>el;
            arr[i]=el;
        }
    }
    void max()
    {
        T max=arr[0];
        for (int i=0;i<n;i++)
        {
            if (arr[i]>max) max=arr[i];
        }
        cout<<"maximum element in the list:"<<max;
    }

};
int main()
{
    arr<int,4> obj;
    obj.insert();
    obj.max();
}
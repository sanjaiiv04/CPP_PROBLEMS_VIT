/* write a program to read n numbers to an array of size n
and pass the address of this array to function to sort it in
ascending order */
#include <iostream>
using namespace std;
class A
{
    public:
        int n;
        A(int x)
        {
            n=x;
        }
        void setarr()
        {
            int arr[n];
            for (int i=0;i<n;i++)
            {
                int el;
                cout<<"Enter element:"; cin>>el;
                arr[i]=el;
            }
            cout<<"array set successfully";
        }
        void sort(int *x)
        {
            int temp;
            for (int i=0;i<n;i++)
            {
                for (int j=0;j<n;j++)
                {
                    if (x[i]<x[j])
                    {
                        temp=x[i];
                        x[i]=x[j];
                        x[j]=temp;
                    }
                }

            }
            for (int i=0;i<n;i++) cout <<x[i];
        }
};
int main()
{
    int no;
    cout<<"enter n:"; cin>>no;
    A obj(no);
    obj.setarr();
}
#include <iostream>
using namespace std;
class sample
{
    public:
    void func(int a)
    {
        int i=1,bin=0;
        while (a!=0)
        {
            int rem=a%2;
            a=a/2;
            bin+=rem*i;
            i=i*10;
        }
        cout<<"Binary of the given number:"<<bin<<endl;
    }
    void func(int a,int b,int c)
    {
        cout<<"sum of the three numbers:"<<a+b+c;
    }
};
int main()
{
    sample obj;
    obj.func(11);
    obj.func(2,4,5);
}
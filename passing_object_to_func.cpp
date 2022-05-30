#include <iostream>
using namespace std;
class Triangle
{
    public:
        float base,height;
        Triangle(float x,float y)
        {
            base = x;
            height = y;
        }
};
void func(Triangle a) //note that unlike friend functions the normal functions where the object is passed
                     //as arguments do not have access to the private data members and functions.
{
    printf("Area of triangle:%.2f",(a.base * a.height)/2);
}
int main()
{
    float p,q;
    cout<<"enter base:";
    cin>>p;
    cout<<"enter height:";
    cin>>q;
    Triangle t1(p,q);
    func(t1);
}
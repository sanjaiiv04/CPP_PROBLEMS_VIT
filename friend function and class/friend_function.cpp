#include <iostream>
using namespace std;
class box
{
    public:
    int length;
    box(int x)
    {
        length=x;
    }
    friend int printlength(box &b);
};
int printlength(box &b)
{
    b.length+=10;
    return b.length;
}
int main()
{
    box obj(2);
    cout<<"After friend function:"<<printlength(obj);

}
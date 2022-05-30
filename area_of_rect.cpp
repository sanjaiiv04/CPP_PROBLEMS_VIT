#include <iostream>
using namespace std;
class Rectangle
{
    private:
        int width,height;
    public:
        int area(int width,int height)
        {
            return (width*height);
        }
};
int main()
{
    Rectangle rect;
    cout<<"Area:"<<rect.area(20,30);
}
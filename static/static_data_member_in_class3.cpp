#include <iostream>
using namespace std;
class car
{
    private:
    int car_id;
    string car_name;
    int ratings;
    
    public:
    static int count;
    car() //when a car object is created increment the count to find total no of cars entered
    {
        count++;
    }
    void input()
    {
        cout<<"Enter car id:"; cin>>car_id;
        cout<<"Enter car name:"; cin>>car_name;
        cout<<"Enter car rating:"; cin>>ratings;
    }
    void display()
    {
        cout<<"Car Id:"<<car_id<<endl;
        cout<<"Car name:"<<car_name<<endl;
        cout<<"Car rating:"<<ratings<<endl;
    }
    
};
int car::count=0;
int main()
{
    car c1,c2;
    c1.input();
    c2.input();
    c1.display();
    c2.display();
    cout<<"Total number of cars:"<<car::count;
}
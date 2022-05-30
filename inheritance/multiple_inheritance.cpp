 #include <iostream>
 using namespace std;
 class A
 {
     public:
     A()
     {
         cout<<"class a";
     }
 };
 class B
 {
     public:
     B()
     {
         cout<<"class b";
     }
 };
 class C:public A,public B //the order of execution of the constructors here depends on
                           //the order of the base classes mentioned during inheritance.
{
    public:
    C()
    {
        cout<<"class c";
    }
};
int main()
{
    C obj;
}
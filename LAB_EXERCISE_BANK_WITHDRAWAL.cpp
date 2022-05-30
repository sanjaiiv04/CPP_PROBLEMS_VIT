#include <iostream>
using namespace std;
class savings
{
    public:
    string name;
    int accno;
    float savings_bal;
    void get_savings_data()
    {
        cout<<"Enter name:"; cin>>name;
        cout<<"Enter account no:"; cin>>accno;
        cout<<"Enter savings balance:"; cin>>savings_bal;
    }
};
class loan:public savings
{
    public:
    int loan_accno;
    float loan_amt;
    string loan_date;
    void get_loan_data()
    {
        cout<<"Enter loan account number:"; cin>>loan_accno;
        cout<<"Enter loan amount:"; cin>>loan_amt;
        cout<<"Enter loan date:"; cin>>loan_date;
    }
    void func1()
    {
        savings_bal = loan_amt + savings_bal;
        cout<<"Current Balance:"<<savings_bal<<endl;
    }
    void func2()
    {
        float withdraw;
        cout<<"Enter amount to withdraw:";
        cin>>withdraw;
        if (withdraw<=savings_bal)
        {
            savings_bal=savings_bal - withdraw;
            cout<<"New balance after withdrawal:"<<savings_bal<<endl;
        }
    }
    void func3()
    {
        float a = (loan_amt * 7.5 * 5)/100;
        cout<<"Simple interest on the loan amount:"<<a<<endl;
        cout<<"New balance in savings account:"<<savings_bal-a<<endl;
    }
};

int main()
{
    int n;
    cout<<"Enter no of loans:"; cin>>n;
    loan arr[n];
    arr[0].get_savings_data();
    for (int i=0;i<n;i++)
    {
        arr[i].get_loan_data();
        arr[i].func1();
        arr[i].func2();
        arr[i].func3();
        arr[i+1].savings_bal=arr[i].savings_bal;
        
    }

}
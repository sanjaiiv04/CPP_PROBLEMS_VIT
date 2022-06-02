
#include <iostream>
#include <vector>

using namespace std;
int main() 
{
    int ch, val,search,flag=0;
    vector<int> vec;
    cout<<"1)Insert Element into the Vector"<<endl;
    cout<<"2)Delete Last Element of the Vector"<<endl;
    cout<<"3)Print size of the Vector"<<endl;
    cout<<"4)Display Vector elements"<<endl;
    cout<<"5)Clear the Vector"<<endl;
    cout<<"6)Search for an element:"<<endl;
    cout<<"7)Exit:"<<endl;
    while (ch!=7)
    {
        cout<<"Enter your Choice: "<<endl;
        cin>>ch; 
        switch(ch) 
        {
            case 1: cout<<"Enter value to be inserted: "<<endl;
            cin>>val;
            vec.push_back(val);
            break;

            case 2: cout<<"Last Element is deleted."<<endl;
            vec.pop_back();
            break;

            case 3: cout<<"Size of Vector: ";
            cout<<vec.size()<<endl;
            break;

            case 4: cout<<"Displaying Vector Elements: ";
            for (int i = 0; i < vec.size(); i++)
            {
                cout<<vec[i]<<" ";
            }
            cout<<endl;
            break;

            case 5: vec.clear();
            cout<<"Vector Cleared"<<endl;
            break;

            case 6:
            cout<<"Enter the number to search:"; cin>>search;
            for (int i=0;i<vec.size();i++)
            {
                if (search==vec[i]) 
                {
                    flag=1;
                    cout<<"Element found at position:"<<i+1<<endl;
                }
                else flag=0;
            }
            if (flag==0) cout<<"Element not found";
            break;

            case 7: cout<<"Exit"<<endl;
            break;
            
            default: cout<<"Error....Wrong Choice Entered"<<endl;
        }
    }
}


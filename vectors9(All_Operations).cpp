#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void reverse(vector<int> &v)
{
    for(int i=v.size()-1;i>=0;i--)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}    
bool f(int x,int y)
{
    return x>y;
}
int main()
{
    int buffer=0;
    int option=0;
    int size;
    int element;
    vector<int> v;
    cout<<"Enter the size of the dataset:";
    cin>>size;
    cout<<endl;
    cout<<"Enter the elements of the dataset:"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<">";
        cin>>element;
        v.push_back(element);
    }
    cout<<endl;

    cout<<"-------------------------MENU-------------------------"<<endl;
    cout<<"1-Add an element to the dataset"<<endl;
    cout<<"2-Sort the dataset in Ascending Order"<<endl;
    cout<<"3-Reverse the dataset"<<endl;
    cout<<"4-Know the size of the dataset"<<endl;
    cout<<"5-Sort the dataset in Descending Order"<<endl;
    cout<<"--------------------------------------------------------"<<endl;
    cout<<"Select an Option:";
    cin>>option;
    cout<<endl;
    switch (option)
    {
    case 1:
    {
        int insertion_element,position;
        cout<<"Enter the element to be inserted:";
        cin>>insertion_element;
        cout<<endl;
        cout<<"Enter the position that the element should be inserted to:";
        cin>>position;
        cout<<endl;
        vector<int> :: iterator it = v.begin();
        v.insert(it+position-1,insertion_element);
        cout<<"New dataset:"<<endl;
        display(v);
    }
        break;
    case 2:
    {
        cout<<"Ascending Order:";
        sort(v.begin(),v.end());
        display(v);
    }
        break;
    case 3:
    {
        reverse(v);
    }
        break; 
    case 4:
    {
        cout<<"Size of the dataset:"<<v.size()<<endl;
    }
        break;
    case 5:
    {
        cout<<"Descending Order:"<<endl;
        cout<<endl;
        sort(v.begin(),v.end(),f);
        display(v);
    }
        break;
    default:
    cout<<"INVALID OPTION SELECTED"<<endl;
        break;
    }


    cin>>buffer;
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}

int main()
{
    int buffer;
    int size=0;
    int element;
    int new_element;
    int copies;
    int position;
    vector<int> v1;
    cout<<"Enter the size of the vector:";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cout<<">";
        cin>>element;
        v1.push_back(element);
    }
display(v1);
cout<<endl;
cout<<"Enter an element to be added to the vector:";
cin>>new_element;
cout<<endl;
cout<<"Enter the position to be added on:";
cin>>position;

// Making an iterator
vector<int> :: iterator iter = v1.begin();

cout<<endl;
cout<<"Enter the number of copies:";
cin>>copies;

v1.insert(iter+position-1,copies,new_element);

display(v1);

cin>>buffer;


}
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
    int buffer=0;
    vector<int> v1;
    int size=0;
    int element=0;
    int new_element=0;
    int copies=0;
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
//insertion of an element in a vector
//iterator required which basically acts like a pointer 

cout<<"Enter the element to be addded:";
cin>>new_element;

cout<<endl;

vector<int> :: iterator iter = v1.begin(); // Syntax to initialize an iterator

v1.insert(iter,new_element);

display(v1);

//Now suppose we want to insert n number of copies of the new element 
// Syntax: v1.insert(iter+1(//second position),n,new_element)

cout<<endl;
cout<<"Enter the number of copies of the new element you want to be inserted in the vector:";
cin>>copies;

v1.insert(iter,copies,new_element);
display(v1);



cin>>buffer;
}
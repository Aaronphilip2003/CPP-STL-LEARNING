
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v)
    {
        for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    }
int main()
{
    int buffer=0;
    vector<int> v1;
    int element;
    int size=0;
    cout<<"Enter the size of the vector:"<<endl;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cout<<"ELEMENT:";
        cin>>element;
        v1.push_back(element);
    }
    display(v1);
    cin>>buffer;
}
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

bool f(int x,int y)
{
    return x>y;
}

int main()
{
    vector<int> a;
    int size=0;
    int element=0;
    int buffer=0;
    cout<<"Enter the size of the vector:";
    cin>>size;
    cout<<endl;
    cout<<"Enter the Elements:"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<">";
        cin>>element;
        a.push_back(element);
    }
    //Sorting using sort present in the algorithm package but will use a bool to sort in descending order
    sort(a.begin(),a.end(),f);
    cout<<"SORTED IN DESCENDING ORDER:"<<endl;
    display(a);

    cin>>buffer;

}

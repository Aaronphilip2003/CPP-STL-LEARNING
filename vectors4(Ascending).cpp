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

int main()
{
    vector<int> a;
    int buffer=0;
    int size=0,element=0;
    cout<<"Enter the number of elements:";
    cin>>size;

    for(int i=0;i<size;i++)
    {
        cout<<">";
        cin>>element;
        a.push_back(element);
    }
    cout<<endl;
    cout<<endl;
    cout<<"Before sorting:"<<endl;
    display(a);

    //sorting the vector using the sort function present in the algorithm package which has beeen included
    sort(a.begin(),a.end());// sorts in O(NlogN) time

    cout<<endl;
    cout<<endl;
    cout<<"After sorting:"<<endl;
    display(a);

    cin>>buffer;
    return 0;
}
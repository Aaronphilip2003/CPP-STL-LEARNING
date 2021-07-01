#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void print(vector<int> &v)
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
    int size=0;
    int element=0;
    int search=0;
    int buffer;
    cout<<"Enter the number of elements:";
    cin>>size;
    cout<<endl;
    cout<<"Enter the Elements:"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<">";
        cin>>element;
        a.push_back(element);
    }
    // We need to find the first occurence of an element
    // Let us sort the elements first but it takes only a line to sort so why not
    // Sorting is not necessary 

    // sort(a.begin(),a.end());
    // cout<<endl;

    // We'll use an iterator and the lower bound function

    cout<<"Enter the element to be searched:";
    cin>>search;

    vector<int>::iterator it=lower_bound(a.begin(),a.end(),search);

    cout<<"The first occurance of the element:"<<*it;

    // if we want to find the number of times an element is present in a vector, take the lower bound and upper bound and take the difference between them



    cin>>buffer;

    return 0;
}

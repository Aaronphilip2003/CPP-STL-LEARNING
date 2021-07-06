#include<iostream>
#include<vector>
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
    int buffer=0;
    vector<int> v;
    int size=0;
    int element;
    int search=0;
    int occurrences=0;
    int position=0;
    cout<<"PROGRAM TO FIND THE SECOND OCCURENCE OF AN ELEMENT:"<<endl;
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
    // All the elements have been inserted into the dataset
    cout<<"Enter the element to be searched:";
    cin>>search;

    // //Sorting the elements
    // sort(v.begin(),v.end());

    // //We'll use the lower bound function to get the position of the first occurrence
    // vector<int> :: iterator first_occurrence = lower_bound(v.begin(),v.end(),search);
    // cout<<"First Occurrence:"<<*first_occurrence<<endl;
    // vector<int> :: iterator second_occurrence= lower_bound(first_occurrence,v.end(),search);
    // cout<<"Second Occurrence:"<<*second_occurrence<<endl;

    for(int i=0;i<size;i++)
    {
        if(v[i]==search)
        occurrences++;
        if(occurrences==2)
        {
            position=i;
            break;
        }
    }
    if(occurrences==2)
    cout<<"POSITION:"<<(position+1)<<endl;
    else
    cout<<"NO SECOND OCCURRENCE:"<<endl;



    cin>>buffer;
    return 0;
}
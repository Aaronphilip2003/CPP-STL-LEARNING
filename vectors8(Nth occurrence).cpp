#include<iostream>
#include<vector>
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
    vector<int> v;
    int buffer=0;
    int size=0;
    int element=0;
    int search=0;
    int occurrences=0;
    int n=0;
    int position=0;
    cout<<"PROGRAM TO FIND THE Nth OCCURRENCE OF AN ELEMENT:"<<endl;
    cout<<"Enter the size of the dataset:";
    cin>>size;
    cout<<endl;
    cout<<"Enter the Elements of the dataset:";
    for(int i=0;i<size;i++)
    {
        cout<<">";
        cin>>element;
        v.push_back(element);
    }
    cout<<"Enter the element to be searched in the dataset:";
    cin>>search;
    cout<<endl;
    cout<<"Enter the value of n(the occurrence of the searched element you want):";
    cin>>n;
    cout<<endl;

    for(int i=0;i<size;i++)
    {
        if(v[i]==search)
        occurrences++;
        if(occurrences==n)
        {
            position=i;
            break;
        }
    }

    if(occurrences==n)
    cout<<n<<"th occurrence was found at "<<(position)<<"th position"<<endl;
    else
    cout<<"NO "<<n<<" OCCURRENCE"<<endl;



    cin>>buffer;
    return 0;

}
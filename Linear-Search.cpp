#include<iostream>
#include<chrono>
using namespace std;
using namespace std::chrono;
int main()
{
    int buffer;
    int size;
    int search;
    cout<<"Enter the size of the dataset:";
    cin>>size;
    int a[size];
    int position;
    bool flag=false;
    cout<<endl;
    cout<<"Enter the Elements of the dataset:"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<">";
        cin>>a[i];
    }
    cout<<endl;
    cout<<"Enter hte element to be searched:";
    cin>>search;
    auto start= high_resolution_clock::now();
    for(int i=0;i<size;i++)
    {
        if(a[i]==search)
        {
            flag=true;
            position=i;
            break;
        }
    }
    auto stop= high_resolution_clock::now();
    auto duration=duration_cast<microseconds>(stop-start);
    cout<<"DURATION:"<<duration.count()<<" microseconds"<<endl;
    if(flag==true)
    {
        cout<<"Search element found at:"<<(position+1)<<"th position."<<endl;
    }
    else
    {
        cout<<"Search Element Not Found!"<<endl;
    }


    cin>>buffer;
    return 0;
}
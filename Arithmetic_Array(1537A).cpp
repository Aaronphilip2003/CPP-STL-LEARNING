#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int buffer=0;
    int size=0;
    int test_cases=0;
    cin>>test_cases;
    while(test_cases!=0)
    {
        cin>>size;
        int a[size];
        int sum=0;
        for(int i=0;i<size;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum==size)
        {
            cout<<"0"<<endl;
        }
        else if (sum > size)
        {
            cout<<sum-size<<endl;
        }
        else
        {
            cout<<"1"<<endl;
        }
        test_cases--;
    }
    cin>>buffer;
    return 0;
}
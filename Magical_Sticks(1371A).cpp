#include<iostream>
using namespace std;
int main()
{
    int buffer=0;
    int test_cases=0;
    cin>>test_cases;
    while(test_cases!=0)
    {
        int sticks=0;
        cin>>sticks;
        if(sticks%2==0)
        {
            cout<<(sticks/2)<<endl;
        }
        else
        cout<<((sticks/2)+1)<<endl;
        test_cases--;
    }
    return 0;
}
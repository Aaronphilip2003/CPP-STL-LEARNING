#include<iostream>
using namespace std;
int gcd(int x, int y);
int main()
{
    
    int buffer=0;
    int test_cases=0;
    cin>>test_cases;

    while (test_cases>0)
    {
        int k;
        cin>>k;
        cout<<(100/gcd(100,k))<<endl;
        test_cases--;
    }
    

    cin>>buffer;
    return 0;
}

int gcd(int x, int y)
{
    int max=0;
    int ret=0;
    if(x>y)
    max=x;
    else if(y>x)
    max=y;
    else
    max=x;

    for(int i=1;i<=max;i++)
    {
        if(x%i==0 && y%i==0)
        ret=i;
    }
    return ret;
}

#include<iostream>
using namespace std;
int main()
{
    int buffer=0;
    int test_cases=0;
    cin>>test_cases;
    int wall1=0,wall2=0;
    while(test_cases!=0)
    {
        cin>>wall1>>wall2;
        cout<<wall1*wall2<<endl;
        test_cases--;
    }




    cin>>buffer;
    return 0;
}
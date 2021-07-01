/*
Passed only the first case. Work on this program later.
*/

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long buffer=0;
    long test_cases=0;
    long s1,s2,s3;
    long mins_late=0;
    long remainder=0;
    long maximum=0,copy=0,minimum=0;
    cin>>test_cases;
    long rem2=0;
    long zero=0;
    while(test_cases!=0)
    {
        cin>>mins_late>>s1>>s2>>s3;
        copy=mins_late;
        if(mins_late>=s1 && mins_late>=s2 && mins_late>=s3)
        {
            if(mins_late%s1==0 || mins_late%s2==0 || mins_late%s3==0)
            {
                cout<<zero<<endl;
            }
            else
            {
                if(s1>s2 && s1>3)
                maximum=s1;
                else if(s2>s3 && s2>s1)
                maximum=s2;
                else if (s3>s1 && s3>s2)
                maximum=s3;
                else
                maximum=s1;
                remainder=mins_late%maximum;
                rem2=maximum-remainder;
                cout<<rem2<<endl;
            }
        }
        else
        {
            if(s1<s2 && s1<3)
                minimum=s1;
                else if(s2<s3 && s2<s1)
                minimum=s2;
                else if (s3<s1 && s3<s2)
                minimum=s3;
                else
                minimum=s1;
                cout<<abs(minimum-copy)<<endl;

        }
        test_cases--;
    }

    cin>>buffer;
    return 0;
}


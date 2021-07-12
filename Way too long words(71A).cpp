#include<iostream>
#include<string>
using namespace std;

int main()
{
    int buffer;
    int test_cases;
    cin>>test_cases;
    while(test_cases!=0)
    {
        string word;
        cin>>word;
        int length=0;
        char first=word[0];
        char last=word[word.length()-1];
        length=word.length();
        if(length>10)
        {
            cout<<first<<(length-2)<<last<<endl;
        }
        else
        cout<<word<<endl;
        test_cases--;
    }
    cin>>buffer;
    return 0;
}
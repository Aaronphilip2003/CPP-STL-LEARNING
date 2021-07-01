// The advantae of a set over a vector is that a set already keeps the elements arranged
#include<iostream>
#include<set>
using namespace std;

void setDemo()
{
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(-56);
    s.insert(76);
    s.insert(100);
    s.insert(-1000);

    for(int x: s)
        cout<<x<<" ";
    cout<<endl;

}

int main()
{
    int buffer=0;
    setDemo();
    cin>>buffer;
    return 0;
}
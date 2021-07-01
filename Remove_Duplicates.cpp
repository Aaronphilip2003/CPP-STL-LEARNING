#include<iostream>
using namespace std;
int main()
{
	int size=0;
	cin>>size;
	int a[size];
	int b[size];
	int temp=0,i=0,j=0,k=0;
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
	for( i=1;i<size;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0&&a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	for(i=0;i<size-1;i++)
	{
		if(a[i]!=a[i+1])
		{
			b[k]=a[i];
			k++;
		}
	}	
	b[k]=a[size-1];
	cout<<++k<<endl;
	for(i=0;i<k;i++)
	{
		cout<<b[i]<<" ";
	}
}
// #include<iostream>
// using namespace std;
// void display(int arr[],int size)
// {
//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int indexDeletion(int arr[],int size,int index)
// {
//     for(int i=0;i<index;i++)
//     {
//         arr[i]=arr[i+1];
//     }
//     return 1;
// }

// int main()
// {
//     int buffer=0;
//     int test_cases=0;
//     cin>>test_cases;
//     while(test_cases!=0)
//     {
//         int size=0;
//         int flag=0;
//         cin>>size;
//         int size_copy=size;
//         int a[size];
//         for(int i=0;i<size;i++)
//         {
//             cin>>a[i];
//         }
//         for(int i=0;i<size;i++)
//         {
//             for(int j=size-1;j>=0;j--)
//             {
//                 if(a[i]-a[j]==1 || a[i]-a[j]==-1)
//                 {
//                     flag=1;
//                     break;
//                 }
//                 if(flag==1)
//                 {
//                     indexDeletion(a,size,i);
//                     size_copy--;
//                 }
//             }
//         }
//         if(size_copy==1)
//         cout<<"YES"<<endl;
//         else
//         cout<<"NO"<<endl;

//         test_cases--;
//     }


//     cin>>buffer;
//     return 0;
// }
#include <bits/stdc++.h>

using namespace std;

int main()
 {
	int buffer=0;
	int test_cases;
	cin >> test_cases;
	while (test_cases!=0) {
		int size;
		cin >> size;
		vector<int> a(size);
		for (auto &it : a) 
        cin >> it;
		sort(a.begin(), a.end());
		bool ok = true;
		for (int i = 1; i < size; ++i) {
			ok &= (a[i] - a[i - 1] <= 1);
		}
		if (ok) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
    cin>>buffer;
	
	return 0;
}
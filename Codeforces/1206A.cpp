#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define sss string
int main()
{
       int n,m;
       cin>>n;
       int ar[n+1];
       for(int i=0;i<n;i++) cin>>ar[i];
       cin>>m;
       int arr[m+1];
       for(int i=0;i<m;i++)  cin>>arr[i];
       sort(ar,ar+n);
       sort(arr,arr+m);
       cout<<ar[n-1]<<" "<<arr[m-1]<<endl;

}
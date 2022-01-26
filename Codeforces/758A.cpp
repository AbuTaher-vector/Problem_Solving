#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int arr[t+1];
    long long sum=0;
    for(int i=0;i<t;i++) cin>>arr[i];
    sort(arr,arr+t);
    reverse(arr,arr+t);
    int x=arr[0];
    for(int i=0;i<t;i++)  sum+=x-arr[i];
    cout<<sum<<endl;

}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,cnt=0;
    cin>>n>>k;
    int l=5-k,arr[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<=l) cnt++;
    }
    cout<<cnt/3<<endl;
}
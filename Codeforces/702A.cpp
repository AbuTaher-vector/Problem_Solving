#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=1;
    vector<int>v;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]<arr[i+1]) cnt++;
        else
        {
            v.push_back(cnt);
            cnt=1;
        }
    }
    v.push_back(cnt);
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    cout<<v[0]<<endl;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4],sum=0;
    for(int i=0;i<3;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+3);
    cout<<min(arr[0]*2+arr[1]*2,sum)<<endl;
}
#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
void code()
{
    nn n;
    cin>>n;
    nn arr[n+1];
    for(nn i=0;i<n;i++) cin>>arr[i];
        sort(arr,arr+n);
    reverse(arr,arr+n);
    nn cnt=0;
    for(nn i=0;i<n-1;i++)
    {
        nn x=i+1;
        if(arr[i]==1) break;
        while(x!=n)
        {
            if((__gcd(arr[i],arr[x]*2)>1) || (__gcd(arr[i]*2,arr[x])>1) ) cnt++;
            x++;
 
        }
    }
    cout<<cnt++<<"\n";
    
 
}                           
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
}
#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
void code()
{
    ss s;
    cin>>s;
    nn n=s.size();
    nn ans=n;
    nn arr[4];
    arr[1]=-n,arr[2]=-n,arr[3]=-n;
    for(nn i=0;i<n;i++)
    {
        arr[s[i]-'0']=i;
        ans=min(ans,i-min(arr[1],min(arr[2],arr[3])));
    }
    if(ans==n) cout<<0<<nl;
    else cout<<ans+1<<nl;
     
}
int main()
{
     nn tt;
     cin>>tt;
     while(tt--) code();
    
}
#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int 
#define ss string
#define nl "\n"
void code()
{
    ll n,b,x,y;
    cin>>n>>b>>x>>y;
    vector<nn>v(n+1);
    ll sum=0;
    for(nn i=1;i<=n;i++)
    {
        if(v[i-1]+x<=b) v[i]=v[i-1]+x;
        else if(v[i-1]-y<=b) v[i]=v[i-1]-y;
        sum+=v[i];

    }
    cout<<sum<<nl;

}
int main()
{ 
   nn tt;
   cin>>tt;
   while(tt--) code();  
}
#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
ll get(ll a)
{
    ss s=to_string(a);
    sort(s.begin(),s.end());
    ll l=s.size();
    nn k=s[0]-'0';
    nn y=s[l-1]-'0';
    return k*y;
}
void code()
{
    ll a,b;
    cin>>a>>b;
    b--;
    while(b--)
    {
        ll z=get(a);
        if(z==0) break;
        a+=z;

    }  
    cout<<a<<nl;
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
   
}
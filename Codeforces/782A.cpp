#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
int main()
{
    map<nn,nn>mp;
    set<nn>s;
    nn n,mx=INT_MIN;
    cin>>n;
    n*=2;
    while(n--)
    {
     nn x;
     cin>>x;
     mp[x]++;
     if(mp[x]==2) s.erase(x);
     else s.insert(x);
     nn k=s.size();
     mx=max(mx,k);

    }
    cout<<mx<<nl;
     
    
}
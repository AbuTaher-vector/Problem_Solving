#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
    nn n,x,y;
    cin>>n>>x>>y;
    nn c,d;
    set<pair<nn,nn>>p;
    while(n--)
    {
       cin>>c>>d;
       nn a=x-c;
       nn b=y-d;
       nn gcd=__gcd(a,b);
       p.insert(make_pair(a/gcd,b/gcd));
    }
    cout<<p.size()<<nl;




}
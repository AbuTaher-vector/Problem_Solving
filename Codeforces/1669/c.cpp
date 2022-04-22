#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
    nn n,x;
    cin>>n;
    vector<nn>v(n);
    for(nn i=0;i<n;i++) cin>>v[i];
     vector<nn>a,b;
     for(nn i=0;i<n;i+=2) a.push_back(v[i]);
           for(nn i=1;i<n;i+=2) b.push_back(v[i]);
      nn aod=0,aev=0;
 for(nn i=0;i<a.size();i++)
 {
     if(a[i]&1) aod++;
     else aev++;
 }
 nn bod=0,bev=0;
 for(nn i=0;i<b.size();i++)
 {
     if(b[i]&1) bod++;
     else bev++;
 }

 if(aod==a.size())
 {
     if((bod==b.size()) || (bev==b.size())) cout<<"YES"<<nl;
     else cout<<"NO"<<nl;

 }
 else if(aev==a.size())
 {
     if((bod==b.size()) || (bev==b.size())) cout<<"YES"<<nl;
      else cout<<"NO"<<nl;

 }
 else cout<<"NO"<<nl;






}
int main()
{
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputt.txt", "w", stdout);
     #endif
     nn tt;
     cin>>tt;
     while(tt--) code();
}
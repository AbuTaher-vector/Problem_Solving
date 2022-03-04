#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
    nn n;
    cin>>n;
    vector<nn>v(n);
    for(nn i=0;i<n;i++) v[i]=i+1;
       reverse(v.begin(),v.end());
   nn j=n-1;
   for(nn i=1;i<=n;i++)
   {
        for(auto x:v) cout<<x<<" ";
            cout<<nl;
        swap(v[j],v[j-1]);
        j--;
   }
    
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
      
}
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
  if(n==1) 
    {
        cin>>x;
        if(x==1)cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }
  else
  {
       vector<nn>v(n);
       for(nn i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
     reverse(v.begin(),v.end());

    if(v[0]-v[1]>1) cout<<"NO"<<nl;
    else cout<<"YES"<<nl;

  }
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();

}
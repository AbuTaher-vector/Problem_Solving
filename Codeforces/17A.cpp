#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n" 
int prime(nn n)
{
      for(nn i=2;i<=sqrt(n);i++)
      {
            if(n%i==0) return 0;
      }
      return 1;
}    
int main()
{
      nn n,k;
      cin>>n>>k;
      vector<nn>v;
      for(nn i=2;i<=n;i++)
      {
            if(prime(i)) v.push_back(i);
      }
      nn cnt=0;
      for(nn i=0;i<v.size()-1;i++)
      {
            nn a=v[i]+v[i+1]+1;
            if(prime(a) && a<=n) cnt++;

      }
      if(cnt>=k) cout<<"YES"<<nl;
      else cout<<"NO"<<nl;



}
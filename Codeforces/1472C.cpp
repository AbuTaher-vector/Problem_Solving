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
     vector<ll>a(n),b(n);
     for(nn i=0;i<n;i++) cin>>a[i];
          for(nn i=n-1;i>=0;i--)
          {
               b[i]=a[i];
               if(i+a[i]<n) b[i]+=b[i+a[i]];
          }
         cout<<*max_element(b.begin(),b.end())<<nl;
    
}
int main()
{
     nn tt;
     cin>>tt;
     while(tt--) code();
}
#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int code()
{
     nn n,k;
    cin>>n>>k;
    vector<nn>a(n);
    for(nn i=0;i<n;i++) cin>>a[i];
       sort(a.begin(),a.end());
   for(nn i=0,j=0;i<n;i++)
   {
      while(j<n && a[j]-a[i]<k) j++;
      if(j<n && a[j]-a[i]==k)
      {
        cout<<"YES"<<nl;
        return 0;
      }
   }
   cout<<"NO"<<nl;
   return 0;
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();

}
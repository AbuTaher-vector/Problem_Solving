#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int code()
{
    nn n;
    cin>>n;
    vector<nn>a(n),b(n);
    for(nn i=0;i<n;i++) cin>>a[i];
     sort(a.begin(),a.end());
     for(nn i=1;i<=1024;i++)
     {
          for(nn j=0;j<n;j++)
          {
               b[j]=a[j]^i;
          }
          sort(b.begin(),b.end());
          if(a==b)
          {
               cout<<i<<nl;
               return 0;
          }

     }
     cout<<-1<<nl;
     return 0;
     
 
 
}
int main()
{
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
     #endif
     nn n;
     cin>>n;
     while(n--) code();
}
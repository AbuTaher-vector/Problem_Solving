#include<bits/stdc++.h>
using namespace std;
void setup()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
     #endif

}
void code()
{
   int n,m;
   cin>>n>>m;
   vector<int>a(n),b(m);
   for(int i=0;i<n;i++) cin>>a[i];
   for(int i=0;i<m;i++) cin>>b[i];
   sort(a.begin(),a.end());
   reverse(a.begin(),a.end());
   int j=0;
   long long int ans=0;
   for(int i=0;i<n;i++)
   {
       if(a[i]-1>j)
       {
            ans+=b[j];
            j++;
       }
       else ans+=b[a[i]-1];
   }
   cout<<ans<<"\n";
}
int main()
{
     setup();

     int tt;
     cin>>tt;
     while(tt--) code();
}
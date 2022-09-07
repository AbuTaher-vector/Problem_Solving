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
int code()
{
   int n;
   cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;i++) cin>>v[i];
   sort(v.begin(),v.end());
   for(int i=n-1;i>=0;i--)
   {
      if(v[i]<=i+1)
      {
        cout<<i+2<<'\n';
        return 0;
      }
   }
   cout<<1<<'\n';
   return 0;
}
int main() {

     setup();
     
      int t;
      cin>>t;
      while(t--) code();
      
}
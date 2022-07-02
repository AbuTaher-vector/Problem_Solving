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
   vector<int>a(n),b(n);
   for(int i=0;i<n;i++) 
   {
      cin>>a[i];
      b[i]=a[i];
   }
   sort(b.begin(),b.end());
   for(int i=0;i<n;i++)
   {
       if(a[i]!=b[i] && a[i]%b[0]!=0)
       {
           cout<<"NO"<<"\n";
           return 0;
       }
   }
   cout<<"YES"<<"\n";
   return 0;
}
int main()
{
     setup();

     int tt;
     cin>>tt;
     while(tt--) code();
}
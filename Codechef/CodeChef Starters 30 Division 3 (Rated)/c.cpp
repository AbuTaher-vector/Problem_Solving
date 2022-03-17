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
   ss s;
   cin>>s;
   ss k=s;
   sort(k.begin(),k.end());
   for(nn i=0;i<n;i++)
   {
     if(s[i]!=k[i]) swap(s[i],s[n-i-1]);

   }
   if(is_sorted(s.begin(),s.end())) cout<<"YES"<<nl;
   else cout<<"NO"<<nl;
   

}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
}
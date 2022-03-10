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
   vector<nn>v(n),o,e;
   for(nn i=0;i<n;i++)
   {
        cin>>v[i];
        if(v[i]%2==0) e.push_back(v[i]);
        else o.push_back(v[i]);
   }
   if(is_sorted(v.begin(),v.end()))
   {
    cout<<"Yes"<<nl;
    return 0;
   }
   if(!is_sorted(e.begin(),e.end()))
   {
       
         cout<<"No"<<nl;
         return 0;
   }
    if(!is_sorted(o.begin(),o.end()))
   {
       
         cout<<"No"<<nl;
         return 0;
   }
    cout<<"Yes"<<nl;
    return 0;


}
int main()
{
     nn tt;
     cin>>tt;
     while(tt--) code();
}
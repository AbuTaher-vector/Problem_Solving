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
   int t;
   string s;
   cin>>t>>s;
   long long int sum=INT_MIN,a=0;
   vector<long long int>v,b;
   for(int i=0;i<t;i++)
   {
       if(s[i]=='L')
       {
           v.push_back(i);
           a+=i;
       }
       else
       {
           v.push_back(t-i-1);
           a+=t-i-1;
       }
   }
   int p=t/2;
   if(t%2==0) p--;
    for(int i=0;i<=p;i++)
    {
        if(s[i]!='R')
        {
              long long int x=(t-1-i)-v[i];
              b.push_back(x);

        }
    }
    for(int i=p+1;i<t;i++)
    {
        if(s[i]!='L')
        {
              long long int x=i-v[i];
              b.push_back(x);

        }
    }
    sort(b.begin(),b.end());
    reverse(b.begin(),b.end());
    for(int i=0;i<b.size();i++) 
    {
        a+=b[i];
        cout<<a<<" ";

    }
    for(int i=0;i<(t-b.size());i++) cout<<a<<" ";
        cout<<'\n';

    

}
int main()
{
       setup();
       
       int tt;
       cin>>tt;
       while(tt--) code();
}
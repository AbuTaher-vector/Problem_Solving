#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int code()
{ 
   
   ss s;
   cin>>s;
   nn a=0,b=0;
   for(nn i=0;i<s.size();i++)
   {
       if(s[i]=='0') a++;
       else b++;
   } 
   a=min(a,b);
   if(a&1) cout<<"DA"<<nl;
   else cout<<"NET"<<nl;
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
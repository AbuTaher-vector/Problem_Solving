#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
   ss s="qwertyuiopasdfghjkl;zxcvbnm,./";
   char a;
   ss x;
   cin>>a>>x;
   nn n;
   if(a=='R') n=-1;
   else n=1;
   for(nn i=0;i<x.size();i++)
   {
       nn pos=s.find(x[i]);
       cout<<s[pos+n];
   }
   cout<<nl;
}
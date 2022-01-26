#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
int main()
{
   nn n,w;
   ss s;
   cin>>n>>s;
   nn mx=INT_MIN;
   set<char>st;
   for(nn i=0;i<n;i++)
   {
    if(s[i]==tolower(s[i]))
    {
      st.insert(s[i]);
    }
    else
    {
      w=st.size();
      mx=max(mx,w);
      st.erase(st.begin(),st.end());
    }
   }
   w=st.size();
   mx=max(mx,w);
   cout<<mx<<nl;

}
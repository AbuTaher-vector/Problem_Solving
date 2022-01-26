#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
int main()
{
   ss s;
   nn k;
   cin>>s>>k;
   if(k>s.size())
   {
    cout<<"impossible"<<nl;
    return 0;
   }
    
  set<char>st;
  for(nn i=0;i<s.size();i++) st.insert(s[i]);
   nn w=st.size();
   if(w>=k) cout<<0<<nl;
   else cout<<k-w<<nl;

}
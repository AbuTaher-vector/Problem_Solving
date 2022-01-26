#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
void code()
{
   nn n;
   ss s;
   cin>>n>>s;
   stack<char>st;
   for(nn i=0;i<s.size();i++)
   {
      if(s[i]=='(') st.push(s[i]);
      if(s[i]==')' && !st.empty()) st.pop();
      
   }
   nn cnt=0;
   while(!st.empty())
   {
     st.pop();
     cnt++; 
   }
   cout<<cnt<<nl;
}
int main()
{
   nn tt;
   cin>>tt;
   while(tt--) code();
}


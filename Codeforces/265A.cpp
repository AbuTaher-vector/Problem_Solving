#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
         ss s,t;
         cin>>s>>t;
         nn cnt=0;
         for(int i=0;i<t.size();i++)
         {
             if(s[cnt]==t[i]) cnt++;
         }
         cout<<++cnt<<endl;
}
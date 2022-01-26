#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{

   nn tt,one=0,zero=0;
   cin>>tt;
   ss s;
   cin>>s;
   for(nn i=0;i<tt;i++)
   {
       if(s[i]=='1') one++;
       else zero++;
   }
   if(one!=zero) cout<<1<<endl<<s<<endl;
   else{
        cout<<2<<endl;
    for(nn i=0;i<tt-1;i++)  cout<<s[i];
   cout<<" ";
   cout<<s[tt-1]<<endl;
   }


}
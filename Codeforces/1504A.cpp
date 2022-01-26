#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
void code()
{
   ss s;
   cin>>s;
   nn cnt=0;
   for(nn i=0;i<s.size();i++) if(s[i]=='a') cnt++;
   if(cnt==s.size()) cout<<"NO"<<"\n";
   else
   {
      cout<<"YES"<<"\n";
      ss k="a";
      k+=s;
      nn flag=0;
     for(nn i=0,j=k.size()-1;i<k.size(),j>=0;i++,j--)
        {
         if(k[i]!=k[j])
         {
            flag=1;
            break;
         }
      
       }
       if(flag) cout<<k<<"\n";
       else cout<<s<<"a"<<"\n";
       
   }

}
int main()
{      
   
   nn tt;
   cin>>tt;
   while(tt--) code();



}
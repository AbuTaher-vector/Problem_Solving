#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{

   ss s;
   cin>>s;
   nn flag=1;
   if(s.size()==1 && s[0]=='1') flag=0;
  else{

  for(nn i=0;i<s.size();i++)
   {
       if(s[i]=='1' && s[i+1]=='1')
       {
           flag=0;
       }
      else if(s[i]=='1' && s[i+1]!='1')
       {
           if(s[i+1]=='4' && s[i+2]=='4')
           {
               flag=0;
               i+=2;
           }
           else if(s[i+1]=='4')
           {
               flag=0;
               i++;
           }
       }
       else
       {
           flag=1;
           break;
       }
   }
}
   if(flag==0) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

}
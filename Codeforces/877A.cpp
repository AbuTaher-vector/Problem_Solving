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
   cin>>s;
   ss arr[6]={"Danil","Olya","Slava","Ann","Nikita"};
   nn cnt=0;
   for(nn i=0;i<5;i++)
   {
      nn pos=-1;
      ss k=arr[i];
       while(1)
       {
        pos=s.find(k,pos+1);
        if(pos!=-1)
        {
          cnt++;
          pos++;
        }
        else break;

       }
   }
   if(cnt!=1) cout<<"NO"<<nl;
   else cout<<"YES"<<nl;
}
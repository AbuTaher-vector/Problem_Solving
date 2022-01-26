#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{

   nn tt;
   cin>>tt;
   ss arr[]={"purple","green","blue","orange","red","yellow"};
   vector<ss>v;
   vector<ss>v2;
   while(tt--)
   {
      ss s;
      cin>>s;
      v.push_back(s);
   }
   nn cnt=0;
   for(nn j=0;j<6;j++)
   {
       cnt=0;
       for(nn i=0;i<v.size();i++)
       {
           if(arr[j]==v[i])
           {
               cnt++;
               break;
           }
       }
       if(cnt==0) v2.push_back(arr[j]);
   }
   cout<<v2.size()<<endl;
   for(nn i=0;i<v2.size();i++)
   {
       if(v2[i]==arr[0]) cout<<"Power"<<endl;
       else if(v2[i]==arr[1]) cout<<"Time"<<endl;
       else if(v2[i]==arr[2]) cout<<"Space"<<endl;
       else if(v2[i]==arr[3]) cout<<"Soul"<<endl;
       else if(v2[i]==arr[4]) cout<<"Reality"<<endl;
       else if(v2[i]==arr[5]) cout<<"Mind"<<endl;

   }

}

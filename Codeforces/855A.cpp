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
     ss arr[tt+1];
     vector<ss>v;
     for(nn i=0;i<tt;i++) cin>>arr[i];
     for(nn i=tt-1;i>0;i--)
     {
         nn x=i-1,flag=0;
         while(x!=-1)
         {
             if(arr[x]==arr[i])
             {
                 flag=1;
                 break;
             }
             else x--;
         }
         if(flag) v.push_back("YES");
         else v.push_back("NO");
     }
     v.push_back("NO");
     for(nn i=v.size()-1;i>=0;i--) cout<<v[i]<<endl;

}
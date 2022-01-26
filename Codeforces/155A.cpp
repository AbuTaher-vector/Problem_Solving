#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,x;
     cin>>t>>x;
     int max=x,min=x,cnt=0;
     while(--t)
     {
         cin>>x;
         if(x>max)
         {
             ++cnt;
             max=x;
         }
         else if(x<min)
         {
             ++cnt;
             min=x;
         }
     }
     cout<<cnt<<endl;
}
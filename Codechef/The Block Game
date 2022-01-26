#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
       int x,flag=0;
       vector<int>v;
       vector<int>a;
       cin>>x;
       while(x!=0)
       {
           v.push_back(x%10);
           a.push_back(x%10);
           x/=10;
       }
       reverse(a.begin(),a.end());
       for(int i=0;i<v.size();i++)
       {
           if(v[i]!=a[i])
           {
               flag=1;
               break;
           }
       }
       if(flag==0) cout<<"wins"<<endl;
       else cout<<"loses"<<endl;


    }
}

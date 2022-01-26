#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define sss string
int main()
{
       nn l,n,flag=0;
       cin>>l>>n;
       while(l<=n)
       {
           nn k=l;
           vector<nn>v;
           set<nn>s;
           while(k!=0)
           {
               v.push_back(k%10);
               s.insert(k%10);
               k/=10;
           }
           if(v.size()==s.size())
           {
               flag=1;
               break;
           }
           else l++;
       }
       if(flag==0) cout<<-1<<endl;
       else cout<<l<<endl;
   }

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
       while(tt--)
       {
           nn n;
           cin>>n;
           if(n>45) cout<<-1<<endl;
           else if(n<10) cout<<n<<endl;
           else{
               vector<nn>v;
               nn k=9,sum=0,l=n;
               while(1)
               {
                   l-=k;
                   if(l>0) v.push_back(k),sum+=k;
                   else break;
                   k--;
               }
               if(n-sum!=0) v.push_back(n-sum);
               for(nn i=v.size()-1;i>=0;i--) cout<<v[i];
               cout<<endl;
           }

       }




}


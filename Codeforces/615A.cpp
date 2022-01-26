#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{


   nn n,m;
   cin>>n>>m;
   set<nn> s;
   while(n--)
   {
       nn x;
       cin>>x;
       while(x--)
       {
           nn t;
           cin>>t;
           s.insert(t);
       }

   }
   if(s.size()==m) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

}

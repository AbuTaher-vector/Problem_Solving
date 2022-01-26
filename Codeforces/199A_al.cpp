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
       if(tt==1) cout<<1<<" "<<0<<" "<<0<<endl;
      else if(tt==2) cout<<2<<" "<<0<<" "<<0<<endl;
       else if(tt==3) cout<<1<<" "<<1<<" "<<1<<endl;
       else if(tt==0) cout<<0<<" "<<0<<" "<<0<<endl;
       else{
            vector<nn>v;
             v.push_back(0);
              v.push_back(1);
              while(1)
              {
                  nn l=v.size();
                 nn m=v[l-1]+v[l-2];
                  if(m>tt) break;
                  else  v.push_back(m);
              }
              nn x=v.size();
              cout<<v[x-2]<<" "<<v[x-4]<<" "<<v[x-5]<<endl;

       }



}
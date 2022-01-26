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
       vector<nn>v;
       while(tt--)
       {
          ss s;
          nn a,b;
          cin>>s>>a>>b;
          v.push_back(a);
          v.push_back(b);
       }
       nn flag=0;
       for(nn i=0;i<v.size();i+=2)
       {
           if(v[i]>=2400 && v[i+1]>v[i])
           {
               flag=1;
               break;
           }
       }
       if(flag==1) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;


}

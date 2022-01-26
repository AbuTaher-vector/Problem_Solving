#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
int main()
{  
         
       vector<pair<nn,nn>>v;
        nn n;
        cin>>n;
        nn a,b,suma=0,sumb=0;
        while(n--)
       {
          cin>>a>>b;
          v.push_back(make_pair(a,b));
          suma+=a;
          sumb+=b;

       }
       if(suma%2==0 && sumb%2==0)
       {
          cout<<0<<nl;
          return 0;
       }
       nn k=suma,y=sumb;
       for(nn i=0;i<v.size();i++)
       {
          suma-=v[i].first;
          suma+=v[i].second;
          sumb-=v[i].second;
          sumb+=v[i].first;
          if(suma%2==0 && sumb%2==0)
         {
          cout<<1<<nl;
          return 0;
         }
         suma=k,sumb=y;

       }
       cout<<-1<<nl;
       return 0;
}
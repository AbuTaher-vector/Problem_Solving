#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
     nn tt;
     ss a,b;
     cin>>tt;
     getchar();
     for(nn i=1;i<=tt;i++)
     {
          getline(cin,a);
          getline(cin,b);
          ss x,y;
          for(nn i=0;i<a.size();i++) if(a[i]!=' ') x.push_back(tolower(a[i]));
               for(nn i=0;i<b.size();i++) if(b[i]!=' ') y.push_back(tolower(b[i]));
                    sort(x.begin(),x.end());
                    sort(y.begin(),y.end());
                cout<<"Case "<<i<<": ";
                if(x==y) cout<<"Yes"<<nl;
                else cout<<"No"<<nl;
     }
}
#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
     ll tt;
     vector<ll>v;
    while(cin>>tt && tt!=EOF) v.push_back(tt);
   for(nn i=v.size()-1;i>=0;i--)
   {
       dd sq=sqrt(v[i]);
       printf("%.4lf\n",sq);
   }

}

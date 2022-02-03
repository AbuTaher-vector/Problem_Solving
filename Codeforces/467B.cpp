#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int bitdiffer(nn x,nn t)
{
    nn XOR=x^t;
    nn cnt=0;
    while(XOR)
    {
       XOR=XOR & (XOR-1);
       cnt++;
    }
   return cnt;
   
    
}
int main()
{
     nn n,m,k,x;
     cin>>n>>m>>k;
     vector<nn>v(m);
     for(nn i=0;i<m;i++) cin>>v[i];
     cin>>x;
     nn cnt=0;
     for(nn i=0;i<m;i++)
     {
          nn a=bitdiffer(x,v[i]);
          if(a<=k) cnt++;
     }
     cout<<cnt<<nl;
}
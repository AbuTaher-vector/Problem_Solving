#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
  
    nn n;
   cin>>n;
   vector<nn>v(n);
   for(nn i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    nn a=v[0];
    nn x=-1;
    for(nn i=0;i<n;i++)
    {
        if(a%v[i]==0 && v[i]!=x)
        {
              x=v[i];
              v[i]=0;
        }
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    nn b=v[0];
    cout<<a<<" "<<b<<nl;
}
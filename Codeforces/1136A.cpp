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
     nn cnt=tt;
     vector<nn>v;
     while(tt--)
     {
         nn l,r;
         cin>>l>>r;
         v.push_back(l);
         v.push_back(r);
     }
     nn x;
     cin>>x;
     for(nn i=1;i<v.size();i=i+2) if(x>v[i]) cnt--;

     cout<<cnt<<endl;
}

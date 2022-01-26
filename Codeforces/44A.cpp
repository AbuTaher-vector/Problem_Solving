#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
    nn tt,cnt=0;
    cin>>tt;
    pair<ss,ss>p[tt];
    for(nn i=0;i<tt;i++)
    {
         ss s1,s2;
         cin>>s1>>s2;
         p[i].first=s1;
         p[i].second=s2;

    }
    sort(p,p+tt);
    for(nn i=0;i<tt-1;i++)
    {
        if(p[i].first==p[i+1].first && p[i].second==p[i+1].second) cnt++;
     }
   cout<<tt-cnt<<endl;

}
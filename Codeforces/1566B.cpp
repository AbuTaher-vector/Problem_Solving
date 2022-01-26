#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
void code()
{
   
    ss s;
    cin>>s;
    nn cnt=0;
    vector<nn>v;
    for(nn i=0;i<s.size();i++)
    {
        if(s[i]=='0') cnt++;
        else
        {
            if(cnt>0) 
                {
                    v.push_back(cnt);
                    cnt=0;
                }
        }
        
    }
              if(cnt>0) 
                {
                    v.push_back(cnt);
                    cnt=0;
                }
    if(v.size()==0) cout<<0<<nl;
    else if(v.size()==1) cout<<1<<nl;
    else if(v.size()>=2) cout<<2<<nl;
}
nn main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
}
#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
nn main()
{
    ss s;
    cin>>s;
    nn cnt=0,cntt=0;
     for(nn i=1;i<s.size();i++) if(s[i]==tolower(s[i])) cnt++;
     if(cnt==0)
     {
        if(s[0]==tolower(s[0])) s[0]=toupper(s[0]);
        else s[0]=tolower(s[0]); 
        for(nn i=1;i<s.size();i++) s[i]=tolower(s[i]);
     }
     cout<<s<<nl;
    
}
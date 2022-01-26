#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int tt,cnt=0,i=0;
    cin>>tt;
    string s,v[1001];
    while(tt--)
    {
            cin>>s;
                if(s[0]=='O' && s[1]=='O'  && cnt==0)
                  {
                s[0]=s[1]='+';
                cnt=1;
                  }
                else if(s[3]=='O' && s[4]=='O'  && cnt==0)
                {
                  s[3]=s[4]='+';
                   cnt=1;
                 }
                 v[i]=s;
                 i++;

    }
    if(cnt!=0)
    {
        cout<<"YES"<<endl;
        for(int j=0;j<i;j++) cout<<v[j]<<endl;
    }
    else cout<<"NO"<<endl;

}
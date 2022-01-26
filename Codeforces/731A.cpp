#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int  sum=0;
    for(int i=0;i<s.size()-1;i++)
    {
        int mx=max(s[i]-'0',s[i+1]-'0');
         int mn=min(s[i]-'0',s[i+1]-'0');
         sum+=min((mx-mn),(mn+26-mx));

    }
          int mx=max(s[0]-'0','a'-'0');
          int mn=min(s[0]-'0','a'-'0');
         sum+=min((mx-mn),(mn+26-mx));
    cout<<sum<<endl;
}
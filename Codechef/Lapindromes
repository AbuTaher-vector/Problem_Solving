#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        vector<char>v1;
        vector<char>v2;
        cin>>s;
        int len=s.size(),flag=1;
        for(int i=0;i<len/2;i++)  v1.push_back(s[i]);
        for(int i=(len+1)/2;i<len;i++) v2.push_back(s[i]);
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        for(int i=0;i<v1.size();i++)
        {
              if(v1[i]!=v2[i])
              {
                  flag=0;
                  break;
              }
        }
        if(flag==1) cout<<"YES"<<endl;
        else if(flag==0) cout<<"NO"<<endl;

    }
}

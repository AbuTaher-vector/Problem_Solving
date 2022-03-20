#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        string s;
        char n ='1';
        int cnt=0;
        vector<int>v;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==n) cnt++;
            else
            {
                v.push_back(cnt);
                cnt=0;
            }
        }
        v.push_back(cnt);
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
       int  sum=0;
        for(int i=0;i<v.size();i=i+2)
        {
            sum+=v[i];
        }
        cout<<sum<<endl;
    }
}
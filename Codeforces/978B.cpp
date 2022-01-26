#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt,cnt=0;
    cin>>tt;
    string s;
    cin>>s;
    char t='x';
    vector<int>v;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==t) cnt++;
        else
        {
            v.push_back(cnt);
            cnt=0;
        }
    }
    v.push_back(cnt);
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    int sum=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]<=2) break;
        else sum+=v[i]-2;
    }
    cout<<sum<<endl;
}
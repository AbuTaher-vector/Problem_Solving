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
    while(tt--)
    {
        ss s1,s2,s3;
        cin>>s1>>s2>>s3;
        int cnt=0;
        for(int i=0;i<s1.size();i++)  if(s3[i]==s2[i] || s3[i]==s1[i]) cnt++;
        if(cnt==s1.size()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }









}
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int a1,a2,a3,a4;
    ll sum=0;
    cin>>a1>>a2>>a3>>a4;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if((s[i]-'0')==1) sum+=a1;
        else if((s[i]-'0')==2) sum+=a2;
        else if((s[i]-'0')==3)  sum+=a3;
        else if((s[i]-'0')==4) sum+=a4;
    }
    cout<<sum<<endl;
}
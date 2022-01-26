#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,Z=0,E=0,R=0,O=0,N=0;
    cin>>t;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='z') Z++;
        else if(s[i]=='e') E++;
        else if(s[i]=='r') R++;
        else if(s[i]=='o') O++;
        else if(s[i]=='n') N++;
    }
    int zero=min(Z,min(E,min(R,O)));
    int one=min(O,min(N,E));
    for(int i=1;i<=one;i++) cout<<1<<" ";
    for(int i=1;i<=zero;i++) cout<<0<<" ";
    cout<<endl;


    }
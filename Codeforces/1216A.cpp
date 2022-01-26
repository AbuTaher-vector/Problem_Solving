#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
    nn tt,cnt=0;
    ss s;
    cin>>tt>>s;
    for(int i=0;i<tt;i=i+2)
    {
        if(s[i]==s[i+1])
        {
            if(s[i]=='a') s[i]='b';
            else s[i]='a';
            cnt++;
        }
    }
    cout<<cnt<<endl<<s<<endl;

}
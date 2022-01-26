#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{

    nn tt,cnt=0,cnt2=0;
    ss s;
    cin>>tt>>s;
    for(nn i=0;i<tt-1;i++)
    {
        if(s[i]=='S' && s[i+1]=='F') cnt++;
        else if(s[i]=='F' && s[i+1]=='S') cnt2++;
    }
    if(cnt>cnt2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

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
    for(nn i=0;i<s.size();i++)
    {
        nn x=s[i]-'0';
        if(x%2==0) cnt+=i+1;
    }
    cout<<cnt<<endl;
}
#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
    ss s;
    cin>>s;
    nn cnt=0,x=1;
    for(nn i=0;i<s.size();i++)
    {
        if(s[i]!=s[i+1]) cnt++,x=1;
        if(s[i]==s[i+1]) x++;
        if(x==5) cnt++,x=1,i++;

    }
    cout<<cnt<<endl;
}
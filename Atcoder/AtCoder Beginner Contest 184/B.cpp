#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
    ll n,x;
    ss s;
    cin>>n>>x>>s;
    for(nn i=0;i<s.size();i++)
    {
        if(s[i]=='o' ) x++;
        else if(x!=0 && s[i]=='x') x--;
    }
    cout<<x<<endl;
 
 
 
}
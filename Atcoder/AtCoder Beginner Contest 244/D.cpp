#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int 
#define ss string
#define nl "\n"

int main()
{   
    char a,b,c,d,e,f,g;
    cin>>a>>b>>c>>d>>e>>f;
    nn cnt=0;
    if(a!=d) cnt++;
    if(b!=e) cnt++;
    if(c!=f) cnt++;
    if(cnt==0 || cnt==3) cout<<"Yes"<<nl;
    else cout<<"No"<<nl;
}
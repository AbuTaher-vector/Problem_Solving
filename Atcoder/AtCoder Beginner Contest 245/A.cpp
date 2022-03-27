#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int 
#define ss string
#define nl "\n"
int main()
{
    nn a,b,c,d;
    cin>>a>>b>>c>>d;
    if((a%24)==(c%24))
    {
        if(d<b) cout<<"Aoki"<<nl;
        else cout<<"Takahashi"<<nl;

    }
    else if(a<c) cout<<"Takahashi"<<nl;
    else cout<<"Aoki"<<nl;

    
}
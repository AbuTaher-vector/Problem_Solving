#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
void code()
{
    nn n,s;
    cin>>n>>s;
 
        nn k;
        if(n%2==1) k=n/2+1;
        else k=n/2;
        nn q=n-k+1;
        cout<<s/q<<nl;
    
 
 
}
nn main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
}
#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
    nn tt;
    cin>>tt;
    while(tt--)
    {
        int n,x,a,b;
        cin>>n>>x>>a>>b;
        cout<<min(abs(a-b)+x,n-1)<<endl;
    }

}
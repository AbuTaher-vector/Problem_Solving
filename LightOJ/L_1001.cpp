#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
    nn t;
    cin>>t;
    while(t--)
    {
        nn x;
        cin>>x;
        if(x<=10) cout<<0<<" "<<x<<endl;
        else cout<<x-10<<" "<<10<<endl;
    }
}
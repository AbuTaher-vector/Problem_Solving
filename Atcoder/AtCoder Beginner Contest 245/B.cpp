#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int 
#define ss string
#define nl "\n"
int main()
{
    vector<nn>v(2001);
    nn n,x;
    cin>>n;
    while(n--)
    {
        cin>>x;
        v[x]++;
    }
    for(nn i=0;i<=2000;i++)
    {
        if(v[i]==0) 
        {
            cout<<i<<nl;
            break;
        }
    }


    
}
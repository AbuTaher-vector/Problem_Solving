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
        nn n;
        cin>>n;
        if(n%2020==0) n%=2020;
        while(n>=2021)
        {
            n-=2021;
            if(n%2020==0)
            {
                 n%=2020;
                break;
            }
        }

        if(n==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

}
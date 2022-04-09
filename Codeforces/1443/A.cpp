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
            nn x;
            cin>>x;
            nn t=x*4;
            while(x--)
            {
                cout<<t<<" ";
                t-=2;
            }
        }
 
}
 
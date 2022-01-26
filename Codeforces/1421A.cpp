#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
        int tt;
        cin>>tt;
        while(tt--)
        {
            nn x,y;
            cin>>x>>y;
            nn mn=min(x,y);
            nn c=(x^mn)+(y^mn);
            cout<<c<<endl;


        }

}
#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
    nn n;
    cin>>n;
    vector<nn>v(3);
    for(nn i=0;i<3;i++) cin>>v[i];
    while(1)
    {
        for(nn i=0;i<3;i++)
        {
            n-=v[i];
            if(n<0)
            {
                if(i==0) cout<<"F"<<nl;
                else if(i==1) cout<<"M"<<nl;
                else cout<<"T"<<nl;
                return 0;
            }

        }

    }
    
}
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
    nn k,l;
    if(tt%2!=0) k=tt/2,l=k+1;
    else k=tt/2,l=k;
    while(1)
    {
        if(__gcd(k,l)==1)
        {
            cout<<k<<" "<<l<<endl;
            break;
        }
        k--,l++;
    }




}

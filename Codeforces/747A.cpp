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
    nn k=sqrt(tt);
    for(nn i=k;i>=1;i--)
    {
        if(tt%i==0)
        {
            cout<<i<<" "<<tt/i<<endl;
            break;
        }
    }

}

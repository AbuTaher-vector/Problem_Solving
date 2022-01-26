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
        ll n,cnt=0;
        cin>>n;
        while(n>1)
        {
            if(n%2==0)
            {
                n/=2;
                cnt++;
            }
            else if(n%3==0)
            {
                n=n*2/3;
                cnt++;
            }
            else if(n%5==0)
            {
                n=(n*4)/5;
                cnt++;
            }
            else
            {
                cnt=-1;
                break;
            }
        }
        cout<<cnt<<endl;


    }


}
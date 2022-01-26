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
         ll n;
         cin>>n;
         if(n<3) cout<<"NO"<<endl;
         else if(n%2!=0) cout<<"YES"<<endl;
         else{
            nn flag=0;
            while(n!=1)
            {
                n/=2;
                if(n%2!=0 && n!=1)
                {
                    flag=1;
                    break;
                }
            }
            if(flag) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
     }

}
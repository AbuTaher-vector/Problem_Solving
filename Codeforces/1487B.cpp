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
        nn n,k;
        cin>>n>>k;
        if(n%2==0)
        {
            cout<<(k-1)%n+1<<endl;
        }
      else{
            nn t=n/2;
             nn l=(k-1)/t;
             cout<<(k-1+l)%n+1<<endl;


      }
    }

}
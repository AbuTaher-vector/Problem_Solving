#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
     nn n;
     cin>>n;
     vector<nn>v(n);
     for(nn i=1;i<=n;i++)v[i-1]=i;
        if(n==2) cout<<-1<<nl;
  else if(n%2!=0)
   {
        for(auto x:v) cout<<x<<" ";
        cout<<nl;
    }
    else
    {
        nn x=1;
        for(nn i=0;i<n;i++)
        {
            v[i]=x;
            x++;
        }
        v[0]=2;
        v[1]=3;
        v[2]=1;

        for(auto x:v) cout<<x<<" ";
        cout<<nl;

    }

}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
      
}
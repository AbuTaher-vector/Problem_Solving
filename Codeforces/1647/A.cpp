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

        nn k=n%3;
        if(k==1)
        {
            cout<<1;
            nn w=n/3;
            while(w--) cout<<21;
            cout<<nl;
        }
        else if(k==2)
        {
             nn w=n/3;
             while(w--) cout<<21;
             cout<<2<<nl;

        }
        else{
           nn w=n/3;
             while(w--) cout<<21;
             cout<<nl;

        }
    


}
int main()
{
  nn tt;
  cin>>tt;
  while(tt--) code();
}
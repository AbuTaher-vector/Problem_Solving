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
          nn l,r;
          cin>>l>>r;
          nn mn=min(l,r);
          cout<<mn<<" "<<mn*2<<endl;
      }
}

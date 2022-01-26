#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
void code()
{

     ll n,m,x;
     cin>>n>>m>>x;
     x--;
     ll row = x%n ;
     ll column = x/n;
     cout<<row*m+column+1<<"\n";

    
}
int main()
{

  nn tt;
  cin>>tt;
  while(tt--) code();
    
}

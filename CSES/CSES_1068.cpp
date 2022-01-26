#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{

     ll n;
     cin>>n;
     cout<<n<<" ";
     while(n!=1)
     {
      if(n%2==0) n/=2;
      else if(n%2==1) n=(n*3+1);
      cout<<n<<" ";
       
     }
     cout<<"\n";
    
}
#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
   nn n,m,a,b;
   cin>>n>>m>>a>>b;
   cout<<min(n*a,min(n/m*b+b,n/m*b+n%m*a))<<"\n";
      
}
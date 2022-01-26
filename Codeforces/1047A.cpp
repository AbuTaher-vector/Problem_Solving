#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
   nn x;
   cin>>x;
   x-=2;
   if(x%3!=0)  cout<<1<<" "<<1<<" "<<x<<endl;
   else if(x%3==0) cout<<1<<" "<<2<<" "<<x-1<<endl;
}
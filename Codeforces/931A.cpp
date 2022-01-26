#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
   nn a,b;
   cin>>a>>b;
   nn k=abs(a-b);
   nn m=k/2;
   nn l=(m*(m+1))/2;
   l*=2;
   if(k%2!=0) l+=(m+1);
   cout<<l<<endl;



}


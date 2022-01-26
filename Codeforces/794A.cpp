#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
    nn a,b,c,n;
    cin>>a>>b>>c>>n;
    nn x,cnt=0;
   while(n--)
   {
       cin>>x;
       if(x>b && x<c) cnt++;
   }

cout<<cnt<<endl;


}
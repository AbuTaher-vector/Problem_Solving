#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
void code()
{
   nn n;
   cin>>n;
   nn k=n/3;
   while(1)
   {
       nn b=n-k;
       nn a=b/2;
       if(a*2==b)
       {
          cout<<k<<" "<<b/2<<"\n";
          break;
       }
       k++;
   }
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
}
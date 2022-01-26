#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
int main()
{
   ss s;
   nn n;
   cin>>s>>n;
   nn k=s.size();
   if(k%n!=0)
   {
    cout<<"NO"<<nl;
    return 0;
   }
   k/=n;
   for(nn i=0;i<n;i++)
   {
       ss a=s.substr(i*k,k);
       ss b=a;
       reverse(b.begin(),b.end());
       if(b!=a)
       {
        cout<<"NO"<<nl;
        return 0;
       }
   }
   cout<<"YES"<<nl;


     
}
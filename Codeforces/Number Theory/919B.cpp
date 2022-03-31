#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
   nn k;
   cin>>k;
   nn a=19,cnt=0;
   while(1)
   {

        nn b=a;
        nn sum=0;
   	    while(b>0)
   	    {
   	    	sum+=b%10;
   	    	b/=10;

   	    }
   	    if(sum==10) cnt++;
   	    if(cnt==k)
   	    {
   	    	cout<<a<<"\n";
   	    	return 0;
   	    }
   	    a+=9;

   }

}
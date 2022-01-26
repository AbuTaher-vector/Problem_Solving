#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
	nn cola;
	while(cin>>cola){
                cola++;
	       nn k=0,rem=0,t=0;
	        nn l=cola;
	         while(1)
	         {
		       k+=l/3;
              t=l/3;
              rem=l%3;
              l=t+rem;
             if(l<3) break;

	         }
	      cout<<--cola+k<<"\n";
	}
	

}
#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
bool is_prime[90000001];
void sieve()
{
  nn n=90000000;
  for(nn i=2;i<=sqrt(n);i++)
  {
    if(!is_prime[i])
    {
         for(nn j=i*i;j<=n;j+=i) is_prime[j]=true;
        
      }


  }
  is_prime[0]=true;
  is_prime[1]=true;


}

int main()
{
	sieve();
	nn n;
	cin>>n;
	nn cntt=0;
	for(nn i=6;i<=n;i++)
	{
		nn cnt=0;
		for(nn j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
				nn w=j;
				nn k=i/j;
				if(!is_prime[w]) cnt++;
				if(w!=k && !is_prime[k]) cnt++;
			}
		}
		if(cnt==2) cntt++;
	}
	cout<<cntt<<"\n";
	


  
}
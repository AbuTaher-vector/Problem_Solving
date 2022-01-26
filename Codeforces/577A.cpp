#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
	nn n,x;
	cin>>n>>x;
	if(x==1) 
	{
		cout<<1<<"\n";
		return 0;
	}
	nn cnt=0;
    for(nn i=2;i<=sqrt(x);i++)
    {
        if(x%i==0 && x/i<=n && x/i==i) cnt++;
    	else if(x%i==0 && x/i<=n) cnt+=2;

    	
    }
    if(x<=n) cnt+=2;
    cout<<cnt<<"\n";

}
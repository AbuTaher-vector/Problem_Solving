#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string

int main()
{
	nn n,m;
	cin >>n>>m;
	if(m%n!=0) cout<<-1<<"\n";
	else
	{
		nn cnt=0,flag=1;
		while(n<m)
		{
		    if(m%(n*3)==0) n*=3;
			else if(m%(n*2)==0) n*=2;
			else break;
			cnt++;
			
		}
		if(n==m) cout<<cnt<<"\n";
		else cout<<-1<<"\n";
	}
  
}
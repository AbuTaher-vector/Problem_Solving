#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
void code()
{
	nn x;
	cin>>x;
	char ch;
	vector<nn>v;
	nn a,b,c,d;
	for(nn i=1;i<=x;i++)
	{
		for(nn j=1;j<=x;j++)
		{
			cin>>ch;
			if(ch=='*')
			{
				v.push_back(i);
				v.push_back(j);
 
			} 
		}
	}
	if(v[0]==v[2] && v[0]==x)
	{
		a=v[0]-1;
		b=v[1];
		c=v[2]-1;
		d=v[3];
	}
	else if(v[0]==v[2] && v[0]!=x)
	{
		a=v[0]+1;
		b=v[1];
		c=v[2]+1;
		d=v[3];
	}
	else if(v[1]==v[3] && v[1]==x)
	{
		a=v[0];
		b=v[1]-1;
		c=v[2];
		d=v[3]-1;
 
	}
	else if(v[1]==v[3] && v[1]!=x)
	{
		a=v[0];
		b=v[1]+1;
		c=v[2];
		d=v[3]+1;
	}
	else 
	{
		a=v[0];
		b=v[3];
		c=v[2];
		d=v[1];
	}
	for(nn i=1;i<=x;i++)
	{
		for(nn j=1;j<=x;j++)
		{
			if((i==a && j==b) || (i==c && j==d) ||(i==v[0] && j==v[1]) || (i==v[2] && j==v[3])) cout<<"*";
			else cout<<".";
		}
		cout<<"\n";
	}
 
}
int main()
{
 
	nn tt;
	cin>>tt;
	while(tt--)
	{
		code();
	}
	
}
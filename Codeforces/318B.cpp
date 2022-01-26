#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
	ss s;
	cin>>s;
	ll cnt=0,cntt=0;
	char a='h',b='m';
	for(nn i=0;i<s.size();i++)
	{
		if(s[i]!=a) a='h';
		if(s[i]=='h') a='e';

		if(s[i]=='e' && a=='e')
		{
			a='a';

		}
		if(s[i]=='a' && a=='a')
		{
			a='v';

		}
		if(s[i]=='v' && a=='v')
		{
			a='y';
			
		}
		if(s[i]=='y' && a=='y')
		{
			a='h';
			cnt++;
			
		}
		if(s[i]!=b) b='h';
		if(s[i]=='m')
		{
			b='e';

		}
		if(s[i]=='e' && b=='e')
		{
			b='t';

		}
		if(s[i]=='t' && b=='t')
		{
			b='a';
			
		}
		if(s[i]=='a' && b=='a')
		{
			b='l';
			
			
		}
		if(s[i]=='l' && b=='l')
		{
			b='m';
			cntt+=cnt;
			
		}



	}
	cout<<cntt<<"\n";
}
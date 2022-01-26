#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int code()
{
	nn x;
	cin>>x;
	if(x==1)
	{
		cout<<-1<<"\n";
		return 0;
	}
	ss s="";
	for(nn i=1;i<x;i++) s.push_back('3');
		s.push_back('4');
	cout<<s<<"\n";
	return 0;
	
}
int main()
{
	nn tt;
	cin>>tt;
	while(tt--)
		code();
	

	

}
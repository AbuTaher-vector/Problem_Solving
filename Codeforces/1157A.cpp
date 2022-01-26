#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
	nn x;
	cin>>x;
	nn cnt=0;
    cnt++;
    set<nn>s;
    s.insert(x);
	while(1)
	{
		x++;
		nn w=x%10;
		while(w==0)
		{
			x/=10;
			w=x%10;
		}
		s.insert(x);
		cnt++;
		if(cnt>s.size()) break;
		

	}
	cout<<s.size()<<"\n";
	

}
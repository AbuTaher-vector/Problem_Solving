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
    ss a="aeioun",b="aeiou";
	for(nn i=0;i<s.size();i++)
	{
		nn pos=a.find(s[i]);
		if(pos>-1) continue;
        nn k=b.find(s[i+1]);
        if(k<0) 
        {
        	cout<<"NO\n";
        	return 0;
        }

		
	}
	cout<<"YES\n";

}
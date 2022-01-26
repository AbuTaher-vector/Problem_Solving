#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
	nn tt;
	cin>>tt;
	char arr[tt+1][tt+1];
	for(nn i=0;i<tt;i++)
	{
		for(nn j=0;j<tt;j++) cin>>arr[i][j];
	}
    nn cnt=0;
    for(nn i=0;i<tt;i++)
	{
		for(nn j=0;j<tt;j++)
		{
				if(arr[i][j-1]=='o' && j-1>=0) cnt++;
				if(arr[i][j+1]=='o' && j+1<=tt-1) cnt++;
				if(arr[i-1][j]=='o' && i-1>=0) cnt++;
				if(arr[i+1][j]=='o' && i+1<=tt-1) cnt++;

             if(cnt & 1)
             {
             	cout<<"NO\n";
             	return 0;
             }
             cnt=0;

		} 
	}
	cout<<"YES\n";
	
}
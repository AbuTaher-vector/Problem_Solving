#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
void code()
{
	nn n,x;
	cin>>n>>x;
	nn arr[n+1];
	nn a=0,b=0,sum=0;
	for(nn i=0;i<n;i++) cin>>arr[i];
    for(nn i=0;i<n;i++)
    {
    	sum+=arr[i];
    	if(sum%x) a=i+1;
    }
    reverse(arr,arr+n);
    sum=0;
    for(nn i=0;i<n;i++)
    {
    	sum+=arr[i];
    	if(sum%x) b=i+1;
    }
    a=max(a,b);
    if(a) cout<<a<<"\n";
    else cout<<-1<<"\n";

}
int main()
{
    nn t;
    cin>>t;
    while(t--) code();

}
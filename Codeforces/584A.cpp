#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
void code()
{
    nn n,t;
    cin>>n>>t;
    ss s=to_string(t);
    nn k=s.size();
    if(k>n) cout<<-1<<"\n";
    else
    {
    	n-=k;
    	while(n--) s.push_back('0');
    	cout<<s<<"\n";
    }
		
}
			
				
int main()
{
    code();
}
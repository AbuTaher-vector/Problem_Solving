#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int code()
{
    nn n,m;
    cin>>n>>m;
    nn t=n;
    n++;
    n/=2;
    for(nn i=n;i<=t;i++)
    {
        if(i%m==0)
        {
            cout<<i<<"\n";
            return 0;
        }
    }
    cout<<-1<<"\n";
    return 0;

}
			
				
int main()
{
    code();
}
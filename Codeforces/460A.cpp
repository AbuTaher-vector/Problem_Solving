#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i;
    cin>>n>>m;
    for(i=1;;i++)
    {
        if(m*i<=n) n++;
        else break;
    }
    cout<<n<<endl;
}
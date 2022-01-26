#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
    nn n;
    cin>>n;
    if(n==0)
    {
        cout<<10<<nl;
        return 0;
    }
    if(n<10)
    {
        cout<<n<<nl;
        return 0;
    }
    vector<nn>v;
    for(nn i=9;i>=2;i--)
    {
        while(n%i==0)
        {
            n/=i;
            v.push_back(i);
        }
    }
    if(n!=1)
    {
        cout<<-1<<nl;
        return 0;
    }
    reverse(v.begin(),v.end());
    for(nn i=0;i<v.size();i++) cout<<v[i];
        cout<<nl;

}
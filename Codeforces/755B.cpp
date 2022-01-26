#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
int main()
{
    nn n,m;
    cin>>n>>m;
    set<ss>st;
    ss s;
    for(nn i=0;i<n;i++)
    {
        cin>>s;
        st.insert(s);
    }
    for(nn i=0;i<m;i++)
    {
        cin>>s;
        st.insert(s);
    }
    nn k=((n+m)-st.size());
    m-=k%2;
    if(n>m) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
  
}
#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
int main()
{
    ss s;
    cin>>s;
    ss n;
    set<char>st(s.begin(),s.end());
    for(auto x:st) n.push_back(x);
    reverse(n.begin(),n.end());
    nn pos=-1,k=0;
    for(nn i=0;i<n.size();i++)
    {
        while(1)
        {
            pos=s.find(n[i],pos+1);
            if(pos>-1)
            {
                cout<<s[pos];
                k=pos;
            } 
            else break;
        }
        pos=k;
     
    }
}
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
    ss s,s1;
    vector<nn>v;
    cin>>s;
    for(nn i=1;i<tt;i++)
    {
        cin>>s1;
        nn x=0,cnt=0;
        while(x!=s.size())
        {
            if(s[x]==s1[x]) cnt++;
            else break;
            x++;
        }
        v.push_back(cnt);
    }
   sort(v.begin(),v.end());
   cout<<v[0]<<endl;

}

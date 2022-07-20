#include<bits/stdc++.h>
using namespace std;
void setup()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
     #endif
}
int code()
{
    int n;
    string s;
    cin>>n>>s;
    map<string,int>mp;
    for(int i=0;i<n;i++)
    {
        string x="";
        for(int j=i;j<n && j-i<3;j++)
        {
            x.push_back(s[j]);
            mp[x]++;

        }
    }
    for(char x='a';x<='z';x++)
    {
        string k="";
        k.push_back(x);
        if(mp[k]==0)
        {
            cout<<k<<'\n';
            return 0;
        }

    }
     for(char x='a';x<='z';x++)
    {
        for(char y='a';y<='z';y++)
        {
             string k="";
             k.push_back(x);
             k.push_back(y);
            if(mp[k]==0)
             {
            cout<<k<<'\n';
            return 0;
            }

        }

    }
     for(char x='a';x<='z';x++)
    {
        for(char y='a';y<='z';y++)
        {
            for(int z='a';z<='z';z++)
            {
                string k="";
             k.push_back(x);
             k.push_back(y);
             k.push_back(z);
            if(mp[k]==0)
             {
            cout<<k<<'\n';
            return 0;
            }

            }
             

        }

    }
    return 0;

}
int main()
{
       setup();
       int t;
       cin>>t;
       while(t--) code();
}

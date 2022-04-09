#include<bits/stdc++.h>
using namespace std;
int main()
{

    int tt;
    cin>>tt;
    while(tt--)
    {
        int n,cnt=1,flag=0;
        vector<int>v;
        string a,b;
        cin>>n;
        for(int j=1;j<=n;j++)
        {
            cin>>a;
            b+=a;
        }
        sort(b.begin(),b.end());
        for(int i=0;i<b.size()-1;i++)
        {
            if(b[i]==b[i+1]) cnt++;
            else{
                v.push_back(cnt);
                cnt=1;
            }
        }
        v.push_back(cnt);
        for(int i=0;i<v.size();i++)
        {
            if(v[i]%n!=0)
            {
                cout<<"NO"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0) cout<<"YES"<<endl;
    }

}

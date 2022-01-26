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
    vector<nn>v;
    nn arr[26]={0};
    set<char>st(s.begin(),s.end());
    ss a="abcdefghijklmnopqrstuvwxyz";
    for(nn i=0;i<a.size();i++)
    {
        nn pos=s.find(a[i]);
        if(pos!=-1)
        {
            v.push_back(pos);
            arr[i]++;
 
        } 
    }
    for(nn i=0;i<v.size()-1;i++)
    {
        if(v[i]>v[i+1]) 
        {
            cout<<"NO"<<nl;
            return 0;
        }
    }
    nn k=st.size(),cnt=0;
    for(nn i=0;i<k;i++) if(arr[i]>0) cnt++;
        if(cnt!=k)
        {
            cout<<"NO"<<nl;
            return 0;
        }
    cout<<"YES"<<nl;
  
}
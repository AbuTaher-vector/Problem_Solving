#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>a;
        int n,x,sum=0;
        for(int i=1;i<=3;i++)
        {
            cin>>x;
            a.push_back(x);
        }
        cin>>n;
        sort(a.begin(),a.end());
        sum+=a[2]-a[1];
        sum+=a[2]-a[0];
        if(n>=sum && (n-sum)%3==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        while(a.size()!=0) a.erase(a.begin()+0);


    }
}
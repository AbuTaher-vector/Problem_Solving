#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,x,sum=0;
    vector<int>a;

    for(i=0;i<3;i++)
    {
        cin>>x;
        a.push_back(x);
    }

    sort(a.begin(),a.end());
    sum+=a[1]-a[0];
    sum+=a[2]-a[1];
    cout<<sum<<endl;
}
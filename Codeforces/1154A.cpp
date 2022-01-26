#include<bits/stdc++.h>
using namespace std;
int main()
{
     vector<int> a;
    int x;
    for(int i=0;i<4;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    int s=a[0]-a[1];
    cout<<s<<" "<<a[2]-s<<" "<<a[3]-s<<endl;

}
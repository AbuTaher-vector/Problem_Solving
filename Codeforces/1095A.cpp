#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt,k=1;
    cin>>tt;
    string s;
    cin>>s;
    for(int i=0;i<tt;i+=k)
    {
        cout<<s[i];
        k++;
    }
    cout<<endl;

}
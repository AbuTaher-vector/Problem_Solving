#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
     int i,t;
     cin>>t;
     while(t--)
     {
         cin>>s;
    vector<char>a;

    a.push_back(s[0]);
    a.push_back(s[1]);
    for(i=3;i<s.size();i=i+2) a.push_back(s[i]);
    for(i=0;i<a.size();i++) cout<<a[i];
    cout<<endl;
    while(a.size()!=0) a.erase(a.begin()+0);
     }

}
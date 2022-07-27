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

int main()
{
       setup();
       
       int n;
       cin>>n;
       string s;
       cin>>s;
       for(int i=0;i<n-1;i++)
       {
           if(s[i]>s[i+1]) 
            {
                s.erase(i,1);
                break;
            }
       }
       if(s.size()==n) s.pop_back();
       cout<<s<<"\n";

}

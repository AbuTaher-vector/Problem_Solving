#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int 
#define ss string
#define nl "\n"
void code()
{
    nn n;
    ss s;
    cin>>n>>s;
    stack<char>st;
    int cnt=0;
     vector<char>v;
     for(nn i=0;i<s.size();i++)
     {
            v.push_back(s[i]);

            if(v.front()==v.back() && v.size()>1)
            {
                cnt++;
                v.clear();
                 s.erase(0,i+1);
                 i=-1;
                 while(!st.empty()) st.pop();
            }
           else
           {
             if(st.empty()) st.push(s[i]);
             else
             {
                if(st.top()=='(' && s[i]==')') st.pop();
                else st.push(s[i]);

                if(st.empty())
                {
                  cnt++;
                  s.erase(0,i+1);
                  i=-1;
                   v.clear();
                   while(!st.empty()) st.pop();
                 }

             }

           }
            
        

     }
     cout<<cnt<<" "<<s.size()<<nl;
     

}
int main()
{ 
   nn tt;
   cin>>tt;
   while(tt--) code();  
}
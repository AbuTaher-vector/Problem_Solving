
#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
//reguler Bracket sequence function
bool RBC(string s)
{
    stack<char>st;
    char x;

    for(nn i=0;i<s.size();i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[') 
            {
                st.push(s[i]);
                continue;
            }
        if(st.empty()) return false;

        if(s[i]==')')
        {
            x=st.top();
            st.pop();
            if(x=='{' || x=='[') return false;
        }
        if(s[i]=='}')
        {
            x=st.top();
            st.pop();
            if(x=='(' || x=='[') return false;
        }
        if(s[i]==']')
        {
            x=st.top();
            st.pop();
            if(x=='(' || x=='{') return false;
        }
    }
    return (st.empty());


}

void code()
{
    ss s;
    cin >> s;
     nn k = s.size();

    if(k%2 == 1 || s[0] == s[k-1]) cout << "NO" << endl;

    else
    {
           char open = s[0],end = s[k-1];
           char x;
           ss alter = s;

         if(open == 'A'  && end == 'B')  x = 'C'; 
         else if(open == 'A'  && end == 'C')  x = 'B';
         else x = 'A';

         for(nn i = 0; i < s.size(); i++)
         {
            if(s[i] == open) s[i] = '(' , alter[i] = '(';

            
            else if(s[i] == end) s[i] = ')' , alter[i] = ')';

            
            else s[i] = '(', alter[i] = ')';


         }
        

          if(RBC(s) || RBC(alter)) cout << "YES" << endl;
          else cout << "NO" << endl;


    }
}
int main()
{
    nn tt;
    cin >> tt;
    while(tt--)
    {
        code();
    }
    
}

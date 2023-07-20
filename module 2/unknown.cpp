#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        string s;
        cin >> n >> s;
        stack<char> st;
        for(int i=0;i<n;i++)
        {
            if(st.empty())
                st.push(s[i]);
            else
            {
                if(s[i]==st.top())
                    st.pop();
                else if(s[i]=='R' && st.top()=='B' || s[i]=='B' && st.top()=='R')
                {
                    st.pop();
                    if(!st.empty() && st.top()=='P') st.pop();
                    else st.push('P');
                }
                else if(s[i]=='R' && st.top()=='G' || s[i]=='G' && st.top()=='R')
                {
                    st.pop();
                    if(!st.empty() && st.top()=='Y') st.pop();
                    else st.push('Y');
                }
                else if(s[i]=='G' && st.top()=='B' || s[i]=='B' && st.top()=='G')
                {
                    st.pop();
                    if(!st.empty() && st.top()=='C') st.pop();
                    else st.push('C');
                }
                else
                    st.push(s[i]);
            }
        }
        stack<char> final;
        while(!st.empty())
        {
            final.push(st.top());
            st.pop();
        }
        while(!final.empty())
        {
            cout << final.top();
            final.pop();
        }
        cout << endl;
    }
}


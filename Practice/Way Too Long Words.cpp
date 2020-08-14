#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        string s;
        cin>>s;

        if(s.length()<=10)
            cout<<s<<endl;
        else
        {
            string res=s[0]+to_string(s.length()-2)+s[s.length()-1];
            cout<<res<<endl;
        }
        
    }
}
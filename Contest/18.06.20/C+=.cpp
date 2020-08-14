#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    long long int a,b,n;
    cin>>t;
    while(t--){
        cin>>a>>b>>n;
        int op=0;
        while(a<=n && b<=n)
        {
            if(a>b)
                b+=a;
            else
            {
                a+=b;
            }
            op++;
            
        }
        cout<<op<<endl;
    }
    
    return 0;
}

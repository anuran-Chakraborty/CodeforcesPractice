#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int minCost=INT_MAX;
    if(m*a<=b)
        minCost=n*a;
    else
    {
        minCost=(n/m)*b+min((n%m)*a,b);
    }
    cout<<minCost<<endl;
}
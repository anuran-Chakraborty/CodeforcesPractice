#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n;
    int boys[n];
    int i;
    for(i=0;i<n;i++)
        cin>>boys[i];

    cin>>m;
    int girls[m];
    for(i=0;i<m;i++)
        cin>>girls[i];

    sort(boys,boys+n);
    sort(girls,girls+m);

    int b=0,g=0,pairs=0;

    while(b<n && g<m)
    {
        if(abs(boys[b]-girls[g])<=1)
        {
            b++;
            g++;
            pairs++;
        }
        else if(boys[b]>girls[g])
            g++;
        else
        {
            b++;
        }
        
    }
    cout<<pairs<<endl;
}
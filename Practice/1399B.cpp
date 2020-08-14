#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio();
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int n, i;
        cin >> n;
        ll a[n],b[n];

        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        ll min_a=INT_MAX, min_b=INT_MAX, res=0;
        for(i=0;i<n;i++)
        {
            min_a=min(a[i],min_a);
            min_b=min(b[i],min_b);
        }

        for(i=0;i<n;i++){
            ll anew=a[i]-min_a;
            ll bnew=b[i]-min_b;

            res=res+max(anew,bnew);
        }
        cout<<res<<endl;

    }
    return 0;
}
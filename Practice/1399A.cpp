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
        bool flag = true;
        cin >> n;
        ll a[n];

        for (i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n);

        for (i = 0; i < n - 1; i++)
        {
            if (abs(a[i] - a[i + 1]) > 1)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "YES\n";
        else
        {
            cout << "NO\n";
        }
    }
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, a;
    cin >> n;
    cin >> m;
    cin >> a;

    long long int res = ceil((double)n / (double)a) * ceil((double)m / (double)a);
    cout << res << endl;
}
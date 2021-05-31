#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef map<ll, ll> mvi;

int main()
{
    ll t, n, item, ans;
    mvi dat;
    cin >> t;
    while (t--)
    {
        cin >> n;
        dat.clear();
        ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> item;
            int diff = item - i;
            dat[diff]++;
        }
        for (auto item : dat)
        {
            ans += (item.second * (item.second - 1)) >> 1;
        }
        cout << ans << "\n";
    }
    return 0;
}
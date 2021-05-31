#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

int main()
{
    vector<ull> ord;
    int t;
    ull n;
    for (int i = 1; i < 10; i++)
    {
        ull num = i;
        ord.push_back(num);
        while (num <= 1e9)
        {
            num = num * 10 + i;
            ord.push_back(num);
        }
    }
    sort(ord.begin(), ord.end());
    cin >> t;
    while (t--)
    {
        cin >> n;
        auto it = upper_bound(ord.begin(), ord.end(), n);
        int ans = (*it == n) ? 1 : 0;
        ans += (it - ord.begin());
        cout << ans << "\n";
    }
    return 0;
}
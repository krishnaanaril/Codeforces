#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef long long ll;

int main()
{
    int t;
    ll n, m, x;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>x;
        ll rem = x % n;
        ll col = (x / n) + (rem != 0 ? 1 : 0);
        ll row = (x % n) != 0 ? (x%n) : n;
        ll ans = (row-1) * m + col;
        cout<<ans<<"\n";
    }
    return 0;
}
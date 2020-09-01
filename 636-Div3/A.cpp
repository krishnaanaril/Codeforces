#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{ 
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    ll n, k, res;
    cin>>t;     
    while(t--) {
        cin>>n;
        k = 4;
        while(n>=(k-1))
        {
            if(n%(k-1)==0){
                cout<<(n/(k-1))<<"\n";
                break;
            }
            k<<=1;
        }
    }
    return 0;
}
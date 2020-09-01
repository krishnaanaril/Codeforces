#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() 
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);    
    ll t, n, hf, smOdd, smEve;
    cin>>t;
    while(t--) 
    {
        smOdd = smEve = 0;
        cin>>n;
        hf = (n>>1);
        if(hf&1)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";            
            for(int i=2, j=0; j<hf; ++j, i+=2)
            {
                cout<<i<<" ";
                smEve += i;                
            }
            for(int i=1, j=0; j<(hf-1); j++, i+=2)
            {
                smOdd += i;
                cout<<i<<" ";
            }
            cout<<(smEve-smOdd)<<"\n";
        }
        
    }
    return 0;
}
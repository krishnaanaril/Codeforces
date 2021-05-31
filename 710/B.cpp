#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int main()
{
    int t, n, k;
    string text;
    vi dat;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        cin>>text;
        dat.clear();
        for(int i=0; i<n; i++)
        {
            if(text[i]=='*')
                dat.push_back(i);
        }
        int len = dat.size();
        if(len < 3)
            cout<<len<<"\n";
        else 
        {
            int f = dat[0];            
            int ans = 2;
            for(int i=1; i<len; i++)
            {
                if(dat[i]-f > k)
                {
                    ans++;
                    f = dat[i-1];
                }
            }
            cout<<ans<<"\n";
        }
    }
    return 0;
}
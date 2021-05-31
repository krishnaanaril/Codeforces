#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, m;
    string a, b;
    int dp[25][25];    
    memset(dp, 0, sizeof(dp));    
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        n = a.size();
        m = b.size();
        int mxCommon = 0;
        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=m; j++)
            {
                if(i==0 || j==0)
                    dp[i][j] = 0;
                else if(a[i-1] == b[j-1])
                {
                    {
                        dp[i][j] = dp[i-1][j-1] + 1; 
                        mxCommon = max(mxCommon, dp[i][j]);
                    }
                }
                else
                    dp[i][j] = 0;
            }
        }        
        cout<<(n+m-(2*mxCommon))<<"\n";
    }
    return 0;
}
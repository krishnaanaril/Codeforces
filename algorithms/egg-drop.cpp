#include <bits/stdc++.h>

using namespace std;

const int N = 100;

int max(int a, int b) 
{ 
    return (a > b) ? a : b; 
} 

int eggDrop(int floors, int eggs) 
{
    int dp[N][N]; // eggs, floors
    int res;
    for(int i=1; i<=eggs; i++)
    {
        dp[i][0] = 0;
        dp[i][1] = 1;
    }
    for(int i=1; i<=floors; i++)
    {
        dp[1][i] = i;
    }
    for(int i=2; i<=eggs; i++)
    {
        for(int j=2; j<=floors; j++)
        {
            dp[i][j] = INT_MAX;
            for(int x=1; x<=j; x++)
            {
                res = 1 + max(dp[i-1][x-1], dp[i][j-x]);
                if(res < dp[i][j])
                    dp[i][j] = res; 
            }            
        }
    }
    return dp[eggs][floors];
}

int main()
{    
    int floors, eggs;
    
    cin>>floors>>eggs;
    cout<<"For "<<floors<<" floors and "<<eggs<<" eggs: ";
    cout<<"No. of egg drops: "<<eggDrop(floors, eggs)<<"\n";
    return 0;
}
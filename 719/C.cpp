#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n == 1)
            cout << "1\n";
        else if (n == 2)
            cout << "-1\n";
        else
        {
            int count = 1;
            int matrix[n + 1][n + 1];
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (((i + j) & 1) == 0)
                    {
                        matrix[i][j] = count++;
                    }
                }
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if ((i + j) & 1)
                    {
                        matrix[i][j] = count++;
                    }
                }
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << matrix[i][j] << " ";
                }
                cout << "\n";
            }
        }
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    string str;
    char prev;
    bitset<30> solved;
    cin >> t;
    while (t--)
    {
        cin >> n >> str;
        solved.reset();
        bool isSuspecious = false;
        prev = '0';
        for (char ch : str)
        {
            if (ch != prev && solved[ch - 'A'])
            {
                isSuspecious = true;
                break;
            }
            solved[ch - 'A'] = true;
            prev = ch;
        }
        if (isSuspecious)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}
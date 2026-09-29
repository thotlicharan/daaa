#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int k, i, n;
    cout << "enter no of coins" << endl;
    cin >> k;
    vector<int> coins(k+1);
    for (int i = 1; i <= k; i++)
    {
        cout << "enter" << i << "coin" << endl;
        cin >> coins[i];
    }
    cout << "enter aumount" << endl;
    cin >> n;
    vector<int> dp(n + 1, n + 1);
    dp[0] = 0;
    for (int i = 1; i < n + 1; i++)
    {
        for (int c : coins)
        {
            if (c <= i && dp[i - c] != n + 1)
            {
                dp[i] = min(dp[i], dp[i - c] + 1);
            }
        }
    }
    (dp[n] == n + 1) ? cout << "not possible" << endl : cout << dp[n] << endl;
    return 0;
}
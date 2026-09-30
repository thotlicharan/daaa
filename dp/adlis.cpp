#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, a[100], i, j,m;
    cout << "enter size" << endl;
    cin >> n;
    int dp[n];
    cout << "enter array elements " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        dp[i] = 1;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[j] < a[i])
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    m=0;
    for (int i = 0; i < n; i++)
    {
        if (m < dp[i])
            m = dp[i];
    }
    cout << "lis" << m << endl;
    return 0;
}

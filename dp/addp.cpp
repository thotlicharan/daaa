#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int k, l,i,j;
    cout << "enter string a length" << endl;
    cin >> k;
    cout << "enter string b length" << endl;
    cin >> l;
    cout << "enter string a elements" << endl;
    string A, B;
    cin >> A;
    cin >> B;
    int dp[k + 1][l + 1];
    for (int i = 0; i < k + 1; i++)
    {
        for (int j = 0; j < l + 1; j++)
            dp[i][j] = 0;
    }
    for (int i = 1; i < k + 1; i++)
    {
        for (int j = 1; j < l + 1; j++)
        {
            if (A[i - 1] == B[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
        }
    }
    cout << "lcs" << dp[k][l];
    return 0;
}
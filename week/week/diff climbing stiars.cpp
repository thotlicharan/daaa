#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n, i;
	cout << "enter number of strairs" << endl;
	cin >> n;
	vector<int> d(n + 1);
	d[1] = 1;
	d[2] = 2;
	for (i = 3; i <= n; i++)
	{
		d[i] = d[i - 1] + d[i - 2];
	}
	cout << " no of ways to climb   " << d[n] << endl;
	return 0;
}
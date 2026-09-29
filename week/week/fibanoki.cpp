#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n, i;
	cout << "enter number" << endl;
	cin >> n;
	vector<int> d(n + 1);
	d[0] = 0;
	d[1] = 1;
	for (i = 2; i <= n; i++)
	{
		d[i] = d[i - 1] + d[i - 2];
	}
	cout << "fibanoki  " << d[n] << endl;
	return 0;
}
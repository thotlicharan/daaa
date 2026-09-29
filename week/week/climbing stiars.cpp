#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n, i;
	cout << "enter number of steps" << endl;
	cin >> n;
	vector<int> d(n + 1);
	int prev1 = 2;
	int prev2 = 1;
	int curr = 0;
	if(n<=2)
		prev1 = n;
	else{
	   for (i = 3; i <= n; i++)
	   {
		  curr = prev1 + prev2;
		  prev2 = prev1;
		  prev1 = curr;
	   }
    }
	cout << "no of different ways  " << prev1 << endl;
	return 0;
}
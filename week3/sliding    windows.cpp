#include<queues>
#include<vector>
#include<iostream>
using namespace std;
vector<int>slidingwindows(vector<int> &&arr,int k){
	deque<int>dq;
	int n=arr.size();
	vector<int>result;
	for(int i=0;i<n;i++){
		while(!dq.empty()&&arr[dq.back()]<arr[i]){
		dq.pop back();
}
dq.push_back(i);
if(dq.front()<=i-k){
	dq.pop front();
}
if(i>=k-1){
		result.pysh back(arr[dq.front()]);
}
}
return result;
}
int main() {
    int n;
    cout << "Enter  elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k;
    cout << "Enter window size k: ";
    cin >> k;
    vector<int>result=slidingwindows(arr,k);
    cout<<"sliding windows:";
    for (int i=0; i<result.size();i++)
    {      	
    	cout<<result[i]<<" ";
	}
    cout << endl;
 
    return 0;
 


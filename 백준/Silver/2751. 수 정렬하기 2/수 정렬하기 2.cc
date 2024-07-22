#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N,num;//갯수
	cin >> N;
	vector<int> arr;
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		arr.push_back(num);
	}
	sort(arr.begin(),arr.end());
	for (int i = 0; i < N; i++)
	{
			cout << arr[i] << '\n';
	}
	return 0;
}

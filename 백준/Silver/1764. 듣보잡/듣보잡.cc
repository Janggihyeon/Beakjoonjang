#include <iostream>
#include <set>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;

int main() {
	int N, M;//N듣도 , M보도
	string name;
	set<string> arr;
	vector<string> final;

	cin >> N >> M;


	for (int i = 0; i < N; i++)
	{
		cin >> name;
		arr.insert(name);
	}

	for (int i = 0; i < M; i++)
	{
		cin >> name;
		if (arr.find(name) != arr.end())
		{
			final.push_back(name);
		}
	}
	sort(final.begin(), final.end());

	cout << final.size() << '\n';
	for (int i = 0; i < final.size(); i++)
	{
		cout << final[i] << '\n';
	}
	
	return 0;
}
#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>

using namespace std;

int main() {
	int number = 0;
	cin >> number;
	vector<tuple<int, string>> set;
	string word;

	for (int i = 0; i < number; i++)
	{
		cin >> word;
		set.push_back(make_tuple(word.length(), word));
	}

	sort(set.begin(), set.end());
		
	word = get<1>(set[0]);
	cout << word << endl;
	for (int i = 1; i < set.size(); i++)
	{
		if (word != get<1>(set[i]))
		{
			cout << get<1>(set[i]) << endl;
			word = get<1>(set[i]);
		}
		
	}
	return 0;
}


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> arr;
int N, M;//N개중 M개를 고르는 수열
int arr_set[8];
void bt(int pt, int num);

int main()
{
	int a;

	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		cin >> a;
		arr.push_back(a);
	}
	sort(arr.begin(),arr.end());

	bt(0, M);

	return 0;
}

void bt(int pt, int num)
{
	if (num == 0)
	{
		for (int i = 0; i < M; i++)
		{
			cout << arr_set[i] << ' ';
		}
		cout << '\n';
	}
	for (int i = 0; i < N; i++)
	{
		bool same = false;
		for (int j = 0; j < pt; j++)
		{
			if (arr_set[j] == arr[i])
			{
				same = true;
				break;
			}
		}
		if (same)
		{
			continue;
		}
		arr_set[pt] = arr[i];
		bt(pt + 1, num - 1);
	}
}
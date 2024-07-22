#include <iostream>

using namespace std;

int nearnum = 0;
int N, M;
int* arr;
void select(int depth, int next, int sum);

int main() {
	cin >> N >> M;//N이 개수,M이 합
	arr = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	select(3,1, 0);
	cout << nearnum << endl;
	return 0;
}

void select(int depth, int next,int sum)
{
	if (depth == 0)
	{
		if (sum-nearnum>0 && M - sum >= 0)
		{
			nearnum = sum;
		}
	}
	else
	{
		for (int i = next; i < N; i++)
		{
			select(depth - 1, i + 1, sum + arr[i]);
		}
	}
}


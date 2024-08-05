#include <iostream>
#include <queue>

using namespace std;
int arr[100001];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N, K;//수빈N,동생 K
	int tmp;
	queue<int> stack;
	cin >> N >> K;

	arr[N] = 1;
	arr[K] = 100000;
	stack.push(N);
	if (N < K)
	{
		while (!stack.empty())
		{
			tmp = stack.front();
			stack.pop();
			if (tmp == K)
			{
				continue;
			}
			if (2 * tmp <= 100000 && (arr[2 * tmp] > arr[tmp] || arr[2 * tmp] == 0) && arr[K] > arr[tmp])
			{
				arr[2 * tmp] = arr[tmp];
				stack.push(2 * tmp);
			}
			if (arr[tmp + 1] > arr[tmp] + 1 || arr[tmp + 1] == 0 && arr[K] > arr[tmp] + 1 && tmp + 1 <= 100000)
			{
				arr[tmp + 1] = arr[tmp] + 1;
				stack.push(tmp + 1);
			}
			if (arr[tmp - 1] > arr[tmp] + 1 || arr[tmp - 1] == 0 && arr[K] > arr[tmp] + 1 && tmp - 1 > 0)
			{
				arr[tmp - 1] = arr[tmp] + 1;
				stack.push(tmp - 1);
			}
		}
		cout << arr[K] - 1 << '\n';
	}
	else
	{
		cout << N - K << endl;
	}
	
	
	return 0;
}
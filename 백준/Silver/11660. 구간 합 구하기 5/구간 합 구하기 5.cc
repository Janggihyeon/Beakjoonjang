#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, M;//NxN사이즈 크기 배열, M개의 갯수 입력
	int x1, x2, y1, y2;
	int total;

	cin >> N >> M;
	int** arr = new int* [N+1];
	int** sum_set = new int* [N+1];
	for (int i = 0; i < N+1; i++) {
		arr[i] = new int[N+1];
		sum_set[i] = new int[N+1];
	}

	for (int i = 0; i <= N; i++)
	{
		arr[i][0] = 0;
		arr[0][i] = 0;
		sum_set[0][i] = 0;
		sum_set[i][0] = 0;
	}

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			cin >> arr[i][j];
			sum_set[i][j] = sum_set[i - 1][j] + sum_set[i][j - 1] -sum_set[i-1][j-1] + arr[i][j];
		}
	}

	for (int i = 0; i < M; i++)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		total = sum_set[x2][y2] - sum_set[x1-1][y2] - sum_set[x2][y1-1] + sum_set[x1-1][y1-1];
		cout << total << '\n';
	}



	for (int i = 0; i < N; i++)
	{
		delete[] arr[i];
		delete[] sum_set[i];
	}
	delete[] arr;
	delete[] sum_set;

	return 0;
}
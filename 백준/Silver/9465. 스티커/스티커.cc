#include <iostream>

using namespace std;

int arr[2][100001];
int n;//n개의 정수
void dp();
int main()
{
	int num;

	cin >> num;
	for (int k = 0; k < num; k++) {
		cin >> n;
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> arr[i][j];
			}
		}
		dp();
		cout << max(arr[0][n - 1], arr[1][n - 1]) <<'\n';
	}

	return 0;
}

void dp()
{
	if (n == 1)
	{
		return;
	}
	arr[1][1] += arr[0][0];
	arr[0][1] += arr[1][0];
	if (n > 2)
	{
		for (int i = 2; i < n; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				if (j == 0)
				{
					arr[j][i] += max(arr[1][i - 1], arr[1][i - 2]);
				}
				else
				{
					arr[j][i] += max(arr[0][i - 1], arr[0][i - 2]);
				}
			}
		}
	}
	
}
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    cin.tie(NULL); //입출력 묶음 해제
    ios_base::sync_with_stdio(false);
    int M, N;//M은 가로, N은 세로
    cin >> M >> N;
    int** arr = new int* [N];
    int ps;
    int x, y;
    int count;
    queue<int> tomato;
    int max = 0;

    for (int i = 0; i < N; i++)
    {
        arr[i] = new int[M];
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> arr[i][j];
            if(arr[i][j]==1)
                tomato.push(i*M+j);
        }
    }
	while (!tomato.empty())
	{
		ps = tomato.front();
		x = ps % M;
		y = ps / M;
		count = arr[y][x];
		tomato.pop();
		if (y - 1 >= 0) {
			if (arr[y - 1][x] == 0 || arr[y - 1][x] > count + 1)
			{
				tomato.push((y - 1) * M + x);
				arr[y - 1][x] = count + 1;
			}
		}
		if (y + 1 < N) {
			if (arr[y + 1][x] == 0 || arr[y + 1][x] > count + 1)
			{
				tomato.push((y + 1) * M + x);
				arr[y + 1][x] = count + 1;
			}
		}
		if (x - 1 >= 0) {
			if (arr[y][x - 1] == 0 || arr[y][x - 1] > count + 1)
			{
				tomato.push(y * M + x - 1);
				arr[y][x - 1] = count + 1;
			}
		}
		if (x + 1 < M)
		{
			if (arr[y][x + 1] == 0 || arr[y][x + 1] > count + 1)
			{
				tomato.push(y * M + x + 1);
				arr[y][x + 1] = count + 1;
			}
		}

	}
    bool isdone = true;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (arr[i][j] > max) {
                max = arr[i][j];
                
            }
            if (arr[i][j] == 0)
            {
                isdone = false;
                break;
            }
        }
    }


    if (isdone)
    {
        cout << max-1 << '\n';
    }
    else
    {
        cout << -1 << '\n';
    }

    for (int i = 0; i < N; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}

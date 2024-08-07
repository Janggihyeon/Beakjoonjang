#include <iostream>
#include <queue>

using namespace std;
char map[1002][1002];
int visited[1002][1002][2];

int main()//bfs?
{
	int N, M;//N은 세로, M은 가로
	
	int x_set[4] = { 0,0,1,-1 };
	int y_set[4] = { 1,-1,0,0 };
	bool done = false;
	queue<pair<pair<int, int>,int>> que;
	pair<pair<int, int>,int> pa;//좌표, 0안부순상태,1부순 상태
	int broken;

	cin >> N >> M;
	
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= M; j++)
		{
			cin >> map[i][j];
			visited[i][j][0] = 0;
			visited[i][j][1] = 0;
		}
	}

	for (int i = 0; i < N+2; i++)
	{
		map[i][0] = '1';
		map[i][M + 1] = '1';
		visited[i][0][0] = -1;
		visited[i][M+1][0] = -1;

		visited[i][0][1] = -1;
		visited[i][M + 1][1] = -1;
	}

	for (int i = 0; i < M + 2; i++)
	{
		map[0][i] = '1';
		map[N + 1][i] = '1';
		visited[0][i][0] = -1;
		visited[N+1][i][0] = -1;

		visited[0][i][1] = -1;
		visited[N + 1][i][1] = -1;

	}
	
	que.push({ { 1,1 }, 0 });
	while (!que.empty())
	{
		int x = que.front().first.first;
		int y = que.front().first.second;
		broken = que.front().second;
		que.pop();
		if (x == N && y == M)
		{
			done = true;
			break;
		}
		for (int i = 0; i < 4; i++)
		{
			int nx = x + x_set[i];
			int ny = y + y_set[i];
			if (visited[nx][ny][broken] == -1)
			{
				continue;
			}
			if (map[nx][ny] == '1')//벽이 있는 경우
			{
				if (broken == 0) {//벽을 부숴서 진입
					visited[nx][ny][1] = visited[x][y][0] + 1;
					que.push({ { nx,ny }, 1 });
				}
			}
			else {//벽이 아닌 경우
				if (visited[nx][ny][broken] == 0)
				{
					visited[nx][ny][broken] = visited[x][y][broken] + 1;
					que.push({ { nx,ny }, broken });
				}
			}
		}
	}
	if (done == true)
	{
		cout << visited[N][M][broken]+1<<'\n';
	}
	else {
		cout << -1 << '\n';
	}
	return 0;
}
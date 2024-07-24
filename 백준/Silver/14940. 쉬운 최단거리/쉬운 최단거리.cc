#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n, m;//세로 n, 가로 m 0은 갈수 없음, 1갈수있는 땅, 2는 목표지점
    int x, y;
    int ps;
    queue<int> qu;
    
    cin >> n >> m;
   
    int** arr = new int* [n];
    int** dis = new int* [n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
        dis[i] = new int[m];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            dis[i][j] = 0;
            if (arr[i][j] == 2)
                qu.push(i * m + j);
        }
    }


    while(!qu.empty())
    {
        ps = qu.front();
        qu.pop();
        x = ps % m;
        y = ps / m;
        if (arr[y][x] == 1||arr[y][x]==2) {
            arr[y][x] = 0;
            if (y - 1 >= 0)
            {
                if (arr[y - 1][x] == 1)
                {
                    qu.push((y - 1) * m + x);
                    dis[y - 1][x] = dis[y][x] + 1;
                }
            }
            if (y + 1 < n) {
                if (arr[y + 1][x] == 1)
                {
                    qu.push((y + 1) * m + x);
                    dis[y + 1][x] = dis[y][x] + 1;
                }
            }
            if (x - 1 >= 0) {
                if (arr[y][x - 1] == 1)
                {
                    qu.push(y * m + x - 1);
                    dis[y][x - 1] = dis[y][x] + 1;
                }
            }
            if (x + 1 < m) {
                if (arr[y][x + 1] == 1)
                {
                    qu.push(y * m + x + 1);
                    dis[y][x + 1] = dis[y][x] + 1;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 1)
            {
                dis[i][j] = -1;
            }
        }
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << dis[i][j] << " ";
        }
        cout << '\n';
    }

    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
        delete[] dis[i];
    }

    delete[] arr;
    delete[] dis;

    return 0;
}

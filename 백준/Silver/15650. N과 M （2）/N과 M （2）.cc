#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int* arr;

void backtracking(int start, int end, int pt, int max)
{
    if (pt == max)
    {
        for (int i = 0; i < max; i++)
        {
            cout << arr[i] <<' ';
        }
        cout << '\n';
        return;
    }
    for (int i = start; i <= end; i++)
    {
        arr[pt] = i;
        backtracking(i + 1, end, pt + 1, max);
    }
}


int main() {
    int N, M;//N까지,M개 고르기
    cin >> N >> M;
    arr = new int[M];
    backtracking(1, N, 0,M);

    delete[] arr;
    return 0;
}
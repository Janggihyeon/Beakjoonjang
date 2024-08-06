#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;

int* chess;
int N;//NxN크기 체스판
int counting=0;
void queen(int x, int y);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N;

	chess = new int[N];
	for (int i = 0; i < N; i++)
	{
		chess[0] = i;
		queen(0, i);
	}
	
	cout << counting << '\n';

	delete[] chess;
	
	return 0;
}

void queen(int x, int y)
{
	for (int i = 0; i < x; i++)
	{
		if (y == chess[i]||abs(x-i)==abs(y-chess[i]))
		{
			return;
		}
	}
	if (x == N - 1)
	{
		counting += 1;
	}
	else {
		for (int i = 0; i < N; i++)
		{
			chess[x + 1] = i;
			queen(x + 1, i);
		}
	}
}
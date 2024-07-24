#include <iostream>
#include <queue>

using namespace std;

int position[100001] = { 0, };

int main(void)
{
	int N, K;//N수빈,K동생
	int ps;
	int count=0;
	int limit=1000000;
	queue<int> step;
	cin >> N >> K;

	step.push(N);
	position[N] = 0;
	while (!step.empty())
	{
		ps = step.front();
		count = position[ps];
		step.pop();
		if (limit > count)
		{
			if (ps == K)
			{
				limit =count;
			}
			if (ps*2<=100000&&position[ps * 2] == 0) {
				step.push(ps * 2);
				position[ps * 2] = count + 1;
			}
			if (ps-1>=0&&position[ps - 1] == 0)
			{
				step.push(ps - 1);
				position[ps - 1] = count + 1;
			}
			if (ps+1<=100000&&position[ps + 1] == 0)
			{
				step.push(ps + 1);
				position[ps + 1] = count + 1;
			}
			
		}
	}

	cout << limit << '\n';
	return 0;
}
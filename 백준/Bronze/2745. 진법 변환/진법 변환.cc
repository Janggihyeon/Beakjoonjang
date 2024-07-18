#include <iostream>
#include <cmath>

using namespace std;

int main() {
	string N;
	int B;
	int sum = 0;


	cin >> N >> B;

	for (int i = 0; i < N.length(); i++)
	{
		int a = N[N.length() - (i + 1)];
		if ('0' <= a && a <= '9')
		{
			a = a - '0';
		}
		else
		{
			a = a - 'A' + 10;
		}
		sum += a * (int)pow(B, i);
	}
	cout << sum << endl;

	return 0;
}
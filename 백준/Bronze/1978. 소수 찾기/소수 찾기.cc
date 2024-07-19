#include <iostream>

using namespace std;

int main() {
	int N;
	int total = 0;
	int number;
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		cin >> number;
		bool issosu = true;
		for (int j = 2; j <= number / 2; j++)
		{
			if (number % j == 0)
			{
				issosu = false;
				break;
			}
		}
		if (number == 1)
		{
			issosu = false;
		}
		if (issosu)
		{
			total++;
		}
	}
	cout << total << endl;
	return 0;
}


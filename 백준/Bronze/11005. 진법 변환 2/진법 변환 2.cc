#include <iostream>
#include <string>

using namespace std;

int main() {
	int a;
	int b;
	string result;
	cin >> a >> b;

	while (a>0)
	{
		int tmp = a % b;
		if (tmp >= 0 && tmp <= 9)
		{
			result += (tmp + '0');
		}
		else
		{
			result += (tmp + 'A' - 10);
		}
		a = a / b;

	}

	for (int i = result.length() - 1; i >=0; i--)
	{
		cout << result[i];
	}

	return 0;
}
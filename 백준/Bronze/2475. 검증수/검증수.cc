#include <iostream>

using namespace std;

int main()
{
	int total=0;
	int a;
	for (int i = 0; i < 5; i++)
	{
		cin >> a;
		total += a * a;
	}
	cout << total % 10 << endl;
	return 0;
}
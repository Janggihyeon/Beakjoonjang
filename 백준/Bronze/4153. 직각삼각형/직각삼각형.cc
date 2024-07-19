#include <iostream>
#include <cmath>
using namespace std;



int main() {
	int a[3];
	while (true)
	{
		cin >> a[0] >> a[1] >> a[2];
		if (a[0] == 0 && a[1] == 0 && a[2] == 0)
		{break;}
		sort(a, a + 3);

		if (pow(a[0], 2) + pow(a[1], 2) == pow(a[2], 2))
		{
			cout << "right" << endl;
		}
		else
		{
			cout << "wrong" << endl;
		}
	}
	return 0;
}
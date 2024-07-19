#include <iostream>

using namespace std;

int main() {
	int people;
	int sizeSet[6];
	int set, set_2;
	int total=0;
	cin >> people;
	cin >> sizeSet[0] >> sizeSet[1] >> sizeSet[2] >> sizeSet[3] >> sizeSet[4] >> sizeSet[5];
	cin >> set >> set_2;

	for (int i = 0; i < 6; i++)
	{
		total += sizeSet[i] % set == 0 ? sizeSet[i] / set : sizeSet[i] / set + 1;
	}

	cout << total << endl;

	cout << people / set_2 <<" " << people % set_2 << endl;
	return 0;
}
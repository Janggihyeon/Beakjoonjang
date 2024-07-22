#include <iostream>

using namespace std;

int main() {
	string arr;
	while (true)
	{
		bool ispal = true;
		cin >> arr;
		if (arr == "0")
			break;
		for (int i = 0; i < arr.length() / 2; i++)
		{
			if (arr[i] != arr[arr.length() -1- i])
			{
				ispal = false;
				break;
			}
		}

		if (ispal)
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
		}
	}
	return 0;
}
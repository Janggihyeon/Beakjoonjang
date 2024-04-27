#include <iostream>

using namespace std;

int main() {
    int number = 0;
    cin >> number;
    for (int i = 1; i < number+1; i++)
    {
        for (int j = 0; j < number - i; j++)
            cout << " ";
        for (int j = 0; j < 2 * i - 1; j++)
            cout << "*";
       
        cout << endl;
    }
    for (int i = number - 1; i > 0; i--)
    {
        for (int j = 0; j < number - i; j++)
            cout << " ";
        for (int j = 0; j < 2 * i - 1; j++)
            cout << "*";
       
        cout << endl;
    }
    return 0;
}

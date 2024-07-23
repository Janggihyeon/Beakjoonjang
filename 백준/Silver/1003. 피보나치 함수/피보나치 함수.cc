#include <iostream>

using namespace std;

void fibonacci(int n) {
    int* one = new int[n+1];
    int* zero = new int[n+1];
    one[0] = 0;
    zero[0] = 1;
    if (n >= 1)
    {
        one[1] = 1;
        zero[1] = 0;
    }
    for (int i = 2; i <= n; i++)
    {
        one[i] = one[i - 1] + one[i - 2];
        zero[i] = zero[i - 1] + zero[i - 2];
    }
    cout << zero[n] << " " << one[n] << '\n';

    delete[] one;
    delete[] zero;
}

int main() {
    int number;
    int input;
    cin >> number;
    for (int i = 0; i < number; i++)
    {
        cin >> input;
        fibonacci(input);
    }

    return 0;
}
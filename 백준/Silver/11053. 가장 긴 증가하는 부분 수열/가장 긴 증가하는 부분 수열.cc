#include <iostream>

using namespace std;

int main() {
    int sz;
    cin >> sz;
    int* arr_one = new int[sz];
    int* arr_two = new int[sz];
    for (int i = 0; i < sz; i++)
    {
        cin >> arr_one[i];
        arr_two[i] = 1;
    }

    for (int i = 1; i < sz; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr_one[i] > arr_one[j])
            {
                arr_two[i] = max(arr_two[i], arr_two[j] + 1);
            }
            
        }
    }
    int max = 0;

    for (int i = 0; i < sz; i++)
    {
        if (max < arr_two[i])
        {
            max = arr_two[i];
        }
    }

    cout <<max<<'\n';

    delete[] arr_one;
    delete[] arr_two;
    return 0;
}
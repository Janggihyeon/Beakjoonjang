    #include <iostream>

    using namespace std;

    int main(void)
    {
        int a,b;
        int i, k, j;
        scanf("%d %d", &a,&b);
        int* array = new int[a] {0};
        for (int n = 0; n < b; n++) {
            scanf("%d %d %d", &i, &k, &j);
            for (int m = i-1; m < k; m++) {
                array[m] = j;
            }
        }
        for (int ab = 0; ab<a; ab++)
        {
            cout << array[ab] << " ";
        }
        return 0;
    }   
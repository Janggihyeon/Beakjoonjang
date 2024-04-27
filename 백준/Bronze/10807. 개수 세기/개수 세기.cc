    #include <iostream>

    using namespace std;

    int main(void)
    {
        int a = 0;
        scanf("%d", &a);
        int* array = new int[a];
        for (int i = 0; i < a; i++)
        {
            cin >> array[i];
        }
        int compare;
        int count=0;
        scanf("%d", &compare);
        for (int i = 0; i < a; i++)
        {
            if (compare == array[i])
            count++;
        }
        cout << count << endl;
        return 0;
    }   
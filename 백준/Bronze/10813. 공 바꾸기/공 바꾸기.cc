    #include <iostream>

    using namespace std;

    int main(void)
    {
        int num, change;
        int one, two,temp;
        scanf("%d %d", &num, &change);
        int* array = new int[num];
        for (int i = 0; i < num; i++)
        {
            array[i] = i+1;
        }
        for (int i = 0; i < change; i++)
        {
            scanf("%d %d", &one, &two);
            temp = array[one-1];
            array[one-1] = array[two-1];
            array[two-1] = temp;
        }

        for (int i = 0; i < num; i++)
        {
            cout << array[i] << " ";
        }
        return 0;
    }   
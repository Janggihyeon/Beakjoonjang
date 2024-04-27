    #include <iostream>

    using namespace std;

    int main(void)
    {
        int num, change;
        scanf("%d %d", &num, &change);
        int* array = new int[num+1];
        for (int i = 1; i < num+1; i++)
        {
            array[i] = i;
        }
        int a, b,c;
        for (int i = 0; i < change; i++)
        {
            scanf("%d %d", &a, &b);
            
            if (b - a > 0) {
                int* subarray = new int[b - a+1];
                for (int i = 0; i < b-a+1; i++)
                {
                    subarray[i] = array[b-i];
                }
                for (int i = 0; i < b - a+1; i++)
                {
                    array[a + i] = subarray[i];
                }
            }
            
            
        }

        for (int i = 1; i < num + 1 ; i++)
        {
            cout << array[i] << " ";
        }

        return 0;
    }   
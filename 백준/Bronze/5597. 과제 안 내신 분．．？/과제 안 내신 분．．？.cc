    #include <iostream>

    using namespace std;

    int main(void)
    {
        bool* array = new bool[31]  { false };
        int a = 0;
        for (int i = 1; i < 29; i++)
        {
            scanf("%d", &a);
            array[a] = true;
        }
        for (int i = 1; i < 31; i++)
        {
            if (array[i] == false)
            {
                cout << i <<endl;
            }
        }

        return 0;
    }   
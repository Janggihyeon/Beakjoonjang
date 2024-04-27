        #include <iostream>
    #include <string>
        using namespace std;

        int main(void)
        {
            string array;
            for (int i = 0; i < 100; i++)
            {
                getline(cin,array);
                cout << array<<endl;
            }
            return 0;
        }   
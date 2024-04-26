    #include <iostream>

    using namespace std;

    int main(void)
    {
        int a, b;
        int total = 0;
        cin >> a;
        cin >> b;
        int* arr = new int[b];
        int* arr2 = new int[b];
        for (int i = 0; i < b; i++)
        {
            cin >> arr[i] >>arr2[i];
            total += arr2[i]*arr[i];
        }
        
        cout << ((total == a) ? "Yes" : "No")<<endl;
        
   
        return 0;
    }   
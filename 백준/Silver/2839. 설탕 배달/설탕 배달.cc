#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int number = 0;
    int i = 0;
    bool check=false;
    int min = 10000;
    cin >> number;
    int* total = new int[(number/5+1)*(number/3+1)];
    for (int x = 0; x <= number / 5; x++)
    {
        for(int y=0;y<=(number-5*x)/3;y++)
            if (5 * x + 3 * y == number)
            {
                total[i++] = x + y;
            }
            else
            {
                total[i++] = -1;
            }
    }
    for (int j = 0; j < i; j++)
    {
        if (min > total[j] && total[j] > -1)
        {    min = total[j];
             check=true;
        }
    }
    if(!check)
        min=-1;
    
    cout << min << endl;
    return 0;
}

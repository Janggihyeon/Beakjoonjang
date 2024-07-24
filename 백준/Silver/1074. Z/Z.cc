#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N, x, y;
    int count=0;
    cin >> N >> y >> x;
    
    int horizontal = (int)pow(2, N);
    int vertical = (int)pow(2, N);
    while (vertical !=1 && horizontal != 1)
    {
        int x_mid = horizontal / 2;
        int y_mid = vertical / 2;

        if (x_mid > x&&y_mid>y)
        {
            
        }
        else if (x_mid <= x && y_mid > y)
        {
            x -= x_mid;
            count += x_mid * y_mid;
        }
        else if (x_mid > x && y_mid <= y)
        {
            y -= y_mid;
            count += x_mid * y_mid + x_mid * y_mid;
        }
        else if (x_mid <= x && y_mid <= y) {
            x -= x_mid;
            y -= y_mid;
            count += x_mid * y_mid + x_mid * y_mid + x_mid * y_mid;
        }
       
        horizontal /= 2;
        vertical /= 2;
    }

    cout << count << endl;
    
    return 0;
}

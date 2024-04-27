#include <iostream>

using namespace std;

int main() {
    int array[6];
    cin >> array[0] >> array[1] >> array[2] >> array[3] >> array[4] >> array[5];
    cout << -(array[0] - 1)<<" " <<-( array[1] - 1) << " " <<-( array[2] - 2) << " " << -(array[3] - 2) << " " << -(array[4] - 2) << " " << -(array[5] - 8) << endl;

    return 0;
}
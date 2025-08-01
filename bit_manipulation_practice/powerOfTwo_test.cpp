#include <iostream>
using namespace std;

bool isPowerOfTwo(int x) {
    // A power of two has exactly one bit set (e.g., 1000, 0100, etc.)
    // So x & (x - 1) will be 0 only for powers of two
    // Also check x != 0, since 0 is not a power of 2
    
    return (x != 0) && ((x & (x - 1)) == 0);
}

int main() {
    int testValues[] = {0, 1, 2, 3, 4, 8, 10, 16, 31};
    for (int x : testValues) {
        cout << x << " is ";
        if (!isPowerOfTwo(x))
            cout << "not ";
        cout << "a power of 2\n";
    }
    return 0;
}

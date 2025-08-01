#include <iostream>
using namespace std;

int moduloPowerOfTwo(int x, int powerOfTwo) {
    // powerOfTwo must be a power of 2 like 2, 4, 8, 16, ...
    // The value powerOfTwo - 1 is a bitmask that selects the lowest log2(powerOfTwo) bits

    // If p = 2ⁿ, then p - 1 will have its lowest n bits set to 1.
    // So x & (p - 1) extracts the last n bits of x, which is exactly what x % p gives.
    return x & (powerOfTwo - 1);
}

int main() {
    int x = 77;
    int powerOfTwo = 64;
    int result = moduloPowerOfTwo(x, powerOfTwo); 
    cout << x << " % " << powerOfTwo << " = " << result << endl;
    return 0;
}

// % with a power of two is slow; x & (p - 1) is fast.

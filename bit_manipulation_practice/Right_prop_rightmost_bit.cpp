#include <iostream>
using namespace std;

int rightPropagate(int x) {
    // x - 1 flips all bits to the right of the rightmost set bit (and the bit itself)
    // OR'ing with x propagates the rightmost 1 to the right
    return x | (x - 1);
}

int main() {
    int x = 0b01010000;
    int result = rightPropagate(x);
    cout << "Original (bin): 01010000" << endl;
    cout << "After propagation (bin): ";
    for (int i = 7; i >= 0; i--)
        cout << ((result >> i) & 1);
    cout << "\nDecimal: " << result << endl;
    return 0;
}

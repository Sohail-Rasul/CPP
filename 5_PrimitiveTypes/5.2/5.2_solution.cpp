#include <iostream>
using namespace std;

// Swap bits in a 64bit array

long long swapBits(long long x, int i, int j){
    if((x >> i) & 1 != (x >> j)&1){ // X right shifted by i and j. Check AND operator with 1 to see if they are equal or not.
        // If they are unequal, we just have to toggle them.
        // We can toggle them using XOR
        // 1 XOR 1 = 0; 0 XOR 1 = 1;

        unsigned long mask1= 1UL << i;
        unsigned long mask2= 1UL << j;
        
        x ^= mask1;
        x ^= mask2;

    }

    return x;
}

int main(){

    long long x = 0b0110101110010101001110001101011100010010111001001111001011010110; // Decimal: 7756896893452014838

    // swap bit 3 and bit 60

    cout << swapBits(x,3,60) <<endl;
    
    return 0;
}
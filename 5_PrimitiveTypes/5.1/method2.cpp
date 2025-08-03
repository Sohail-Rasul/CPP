#include <iostream> 
using namespace std;

// This code takes O(logn) time whereas loop takes O(n). This is much faster.

short Parity(unsigned long x){
    // Bitwise XOR the number with itself shifted right by various amounts
    // This gradually mixes all the bits together, so the final bit (LSB) holds the parity
    
    x ^= x >> 32; // XOR upper 32 bits with lower 32 bits
    x ^= x >> 16; // XOR upper 16 bits with lower 16 bits
    x ^= x >> 8;  // XOR upper 8 bits with lower 8 bits
    x ^= x >> 4;  // Continue mixing bits down
    x ^= x >> 2;  
    x ^= x >> 1;  // Final mixing step, LSB now contains the parity

    return x & 0x1; // Return only the least significant bit (0 or 1) — this is the parity (0x1 means the last digit of a binary is 1 rest 0, eg: 000...01)
}

int main(){
    long x = 0b110010011; 

    cout << "Even number of 1s = 0 Parity \nOdd number of 1s = 1 Parity" << endl;
    cout << "Parity: " << Parity(x) << endl;

    return 0;
}

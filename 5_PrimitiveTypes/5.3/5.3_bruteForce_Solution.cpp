#include <iostream>
using namespace std;

// Swap bits in a 64bit array

long long swapBits(long long x, int i, int j){
    if(((x >> i) & 1) != ((x >> j)&1)){ // X right shifted by i and j. Check AND operator with 1 to see if they are equal or not.
        // If they are unequal, we just have to toggle them.
        // We can toggle them using XOR
        // 1 XOR 1 = 0; 0 XOR 1 = 1;

        unsigned long long mask1= 1ULL << i;
        unsigned long long mask2= 1ULL << j;
        // We use ULL as Ul is only 32 bits (often) whereas ULL is 64 (always) 
        
        x ^= mask1;
        x ^= mask2;

    }

    return x;
}

void printBinary(long long x) { // Function to print in binary
    for (int i = 63; i >= 0; i--) {
        cout << ((x >> i) & 1);
    }
    cout << endl;
}

int main(){

    long long x = 0b0000000000000000000000000000000011111111111111111111111111111111; // Decimal: 7756896893452014838 

    cout << "Original: " << endl;
    printBinary(x);

    for(int i =0;i<32;i++){ //Loop to swap the first 32 bits with the last 32
       x = swapBits(x,i,63-i);
    }

    cout << "Reversed: " << endl;
    printBinary(x);
    
    return 0;
}
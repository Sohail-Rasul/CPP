#include <iostream>
using namespace std;

// Computing Parity

short parity(unsigned long x){
    short result = 0; // This means we are starting with 0 parity (even number of 1s)

    while(x){ // Loop runs until x becomes 0, For eg: 110010 => 3 loops

        result ^= 1; // XOR operator, 1 XOR 1 = 0, 1 XOR 0 = 1
        // If we have result = 0, another one would make it 1 (odd), if it is 1 then the next will make it 0 (even).

        x = x & (x-1); //Removes the righmost set bit (1) in x
    }
    return result;
}

int main(){
    long x = 0b11001001;
    cout << "Even number of 1s = 0 Parity \nOdd number of 1s = 1 Parity" << endl;
    cout << "Parity:" << (parity(x)) << endl;
    return 0;
}


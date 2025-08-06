#include <iostream>
#include <vector>
using namespace std;

// Reorder entries of an array so that even integers appear first.
// Solve without allocating extra storage

void evenOdd(vector<int>* A_ptr){ 
    // Use vector<int> when passing large vectors to functions and you want to modify the original vector.
    // When managing dynamic memory (new vector<int>).

    // Partition the array into 3 sub-arrays: Even, Unclassified, Odd.
    // Initially all elements are in unclassified, we iterate through is and move its elements to the boundaries of Even and Odd sub-arrays

    vector<int>& A = *A_ptr; 
    int evenPos=0;
    int oddPos=A.size()-1;

    while(evenPos<oddPos){
        if(A[evenPos] %2 == 0){
            evenPos++;
        }
        else{
            // Swapping
            int temp=A[evenPos];
            A[evenPos]=A[oddPos];
            A[oddPos]=temp;

            oddPos--;
        }
    }

} 


int main(){
    vector<int> nums= {4,8,3,5,9,12,2,7,14};
    
    cout << "Unsorted Array: " << endl;
    for (int n : nums){
        cout << n << " ";
    }     

    evenOdd(&nums);
    cout << "\nSorted Array: " << endl;
    for(int n : nums){
        cout << n << " ";
    }    

    return 0;
}
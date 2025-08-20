#include <iostream>
#include<vector>
using namespace std;

typedef enum {RED,WHITE,BLUE} Color;

void sort(int pivot_index, vector<Color> *ArrPtr ){

    vector<Color> ArrSmaller, ArrEqual, ArrGreater;
    vector<Color>& A = *ArrPtr;
    Color pivot = A[pivot_index];

    for (Color c : A) {
        if (c < pivot)
            ArrSmaller.push_back(c);
        else if (c == pivot)
            ArrEqual.push_back(c);
        else
            ArrGreater.push_back(c);
    }
    A.clear();
    A.insert(A.end(), ArrSmaller.begin(), ArrSmaller.end());
    A.insert(A.end(), ArrEqual.begin(), ArrEqual.end());
    A.insert(A.end(), ArrGreater.begin(), ArrGreater.end());
}


int main() {
    vector<Color> A = {WHITE, BLUE, RED, WHITE, RED, BLUE};
    sort(0, &A); // Use A[0] as pivot

    for (Color c : A)
        cout << c << " "; // Output should be sorted based on pivot (0 = RED, 1 = WHITE, 2 = BLUE)

    return 0;
}

#include <iostream>
using namespace std;

// C++: Corrected Version - Sum of an Array
int calculateSum(int arr[], int size) {
    int total = 0;  // Fixed typo: 'o' -> '0'
    for (int i = 0; i < size; i++) {  // Fixed typo: 'o' -> '0'
        total += arr[i];
    }
    return total;
}

int main () {
    int numbers [] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);  // Fixed incorrect index reference
    int result = calculateSum(numbers, size);
    cout << "Sum in C++: " << result << endl;  // Fixed incorrect string concatenation
    return 0;
}

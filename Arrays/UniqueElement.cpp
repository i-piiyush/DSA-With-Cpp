/*
    Question:
    Given an array where every element appears twice except for one unique element,
    find that unique element using the XOR operation.

    Approach:
    1. Initialize a variable `ans` to 0.
    2. Iterate through the array and perform XOR with each element.
    3. Since `x ^ x = 0` and `x ^ 0 = x`, all duplicate elements cancel out,
       leaving only the unique element in `ans`.
    4. Print the unique element.
*/

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 1, 2, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans = 0;

    // XOR all elements in the array
    for (int i = 0; i < size; i++) {
        ans = ans ^ arr[i];
    }

    // Print the unique element
    cout << "Unique element: " << ans << endl;

    return 0;
}

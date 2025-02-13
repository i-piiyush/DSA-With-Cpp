#include <iostream>

int main() {
    /*
    Question:
    - Given an array of `n` numbers where one number is missing and one number appears twice.
    - Find the missing number using XOR.

    Approach:
    - XOR all elements in the array. This will cancel out duplicate numbers.
    - XOR with numbers from `1 to n-1` to isolate the missing number.
    - The final `ans` will store the missing number.
    */

    int arr[] = {1, 2, 2, 4, 3}; // Example input where 2 appears twice and 5 is missing
    int ans = 0;
    
    // Step 1: XOR all elements in the given array
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        ans = ans ^ arr[i]; // Accumulate XOR
    }

    // Step 2: XOR with numbers from 1 to (n-1)
    for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++) {
        ans = ans ^ i; // Cancels out correct numbers, leaving the missing one
    }

    // Step 3: The final value of `ans` is the missing number
    std::cout << "Missing number: " << ans << std::endl;

    return 1;
}

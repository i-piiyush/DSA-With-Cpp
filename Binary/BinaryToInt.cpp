/*
    Question:
    Convert a given integer into its binary representation without leading zeros.

    Approach:
    1. If the number is 0, directly print "0" and return.
    2. Use a loop from the 31st bit (most significant) to the 0th bit (least significant).
    3. Extract each bit using bitwise right shift (`>>`) and bitwise AND (`&`).
    4. Start printing only after encountering the first '1' (to avoid leading zeros).
    5. Print the binary representation of the number.
*/

#include <iostream>
using namespace std;

void Converter(int n)
{
    if (n == 0) { // Directly handle the case when n is 0
        cout << 0;
        return;
    }

    bool started = false; // Flag to start printing after first '1'
    
    for (int i = 31; i >= 0; i--)
    {
        int bit = (n >> i) & 1; // Extract i-th bit
        
        if (bit == 1)
            started = true; // Start printing once we see the first '1'
        
        if (started)
            cout << bit; // Print only after first '1'
    }
}

int main()
{
    int n = 732; // Example number
    Converter(n); // Expected output: 1011011100

    return 0;
}

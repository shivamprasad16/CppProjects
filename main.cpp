#include <iostream>
using namespace std;

#include <iostream>

bool isPowerOfTwoShift(int n) {
    // 1. A power of 2 must be greater than 0
    // 2. __builtin_ctz(n) counts the number of trailing zeros (e.g., for 8 (1000), it's 3)
    // 3. We shift 1 to the left by that amount (1 << 3 = 8). 
    // If it equals the original n, it's a power of 2.
    return (n > 0) && ((1 << __builtin_ctz(n)) == n);
}

int main() {
    int n = 5;

    cout << isPowerOfTwoShift(n);


    return 0;
}


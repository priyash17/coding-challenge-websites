#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // Fast I/O to speed up execution
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, s, p, q;
    if (!(cin >> n >> s >> p >> q)) return 0;
    
    if (n == 0) {
        cout << 0 << "\n";
        return 0;
    }

    // 0x7FFFFFFF is the hexadecimal equivalent of (2^31 - 1). 
    // Using Bitwise AND (&) with this is much faster than modulo (%).
    const long long BIT_MASK = 0x7FFFFFFF;

    long long tortoise = s & BIT_MASK;
    long long hare = s & BIT_MASK;
    bool cycle_found = false;

    // 1. Detect if a cycle exists within the first N elements
    for (int i = 1; i < n; ++i) {
        // Tortoise moves 1 step
        tortoise = (tortoise * p + q) & BIT_MASK;
        
        // Hare moves 2 steps
        hare = (hare * p + q) & BIT_MASK;
        hare = (hare * p + q) & BIT_MASK;
        
        // If they meet, they are caught in a cycle!
        if (tortoise == hare) {
            cycle_found = true;
            break;
        }
    }

    // 2. If they never met, every single element up to N was completely unique.
    if (!cycle_found) {
        cout << n << "\n";
    } else {
        // 3. Cycle exists! Find exactly where the cycle starts (mu)
        long long ptr1 = s & BIT_MASK;
        long long ptr2 = tortoise;
        long long mu = 0;
        
        while (ptr1 != ptr2) {
            ptr1 = (ptr1 * p + q) & BIT_MASK;
            ptr2 = (ptr2 * p + q) & BIT_MASK;
            mu++;
        }
        
        // 4. Find the length of the cycle (lambda)
        long long lambda = 1;
        ptr2 = (ptr1 * p + q) & BIT_MASK;
        while (ptr1 != ptr2) {
            ptr2 = (ptr2 * p + q) & BIT_MASK;
            lambda++;
        }
        
        // The total distinct elements is the path before the cycle (mu) 
        // plus the unique elements inside the loop (lambda).
        // We cap it at 'n' using min() just in case the cycle exceeds the total elements requested.
        cout << min((long long)n, mu + lambda) << "\n";
    }

    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
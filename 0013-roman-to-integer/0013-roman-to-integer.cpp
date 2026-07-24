class Solution {
public:
    int romanToInt(string s) {
        int total = 0;
        int prevValue = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            int currValue = 0;
            switch (s[i]) {
                case 'I': currValue = 1; break;
                case 'V': currValue = 5; break;
                case 'X': currValue = 10; break;
                case 'L': currValue = 50; break;
                case 'C': currValue = 100; break;
                case 'D': currValue = 500; break;
                case 'M': currValue = 1000; break;
            }
            if (currValue < prevValue) {
                total -= currValue;
            } else {
                total += currValue;
            }
            prevValue = currValue;
        }
        
        return total;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
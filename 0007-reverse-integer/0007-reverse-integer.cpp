class Solution {
public:
    int reverse(int x) {
        int r=0,s=0,p;
        p=x;
        while(p!=0){
            r=p%10;
            if (s > INT_MAX / 10 || (s == INT_MAX / 10 && r > 7)) {
                return 0;
            }
            if (s < INT_MIN / 10 || (s == INT_MIN / 10 && r < -8)) {
                return 0;
            }
            s=s*10+r;
            p=p/10;
        }
        return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
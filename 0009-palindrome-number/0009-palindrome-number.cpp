class Solution {
public:
    bool isPalindrome(int x) {
        
        string s=to_string(x);
        int n=s.length();
        for(int i=0;i<(n/2);i++){
            if(s[i]!=s[n-1-i])
            return false;
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
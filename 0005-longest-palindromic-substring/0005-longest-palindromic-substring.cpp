class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length()<2){
            return s;
        }
        string p="";
        for(int i=1;i<s.length();i++){
            int low,high;
            string a;
            low=i;
            high=i;
            while(low >= 0 && high < s.length() && s[low]==s[high]){
                low--;
                high++;
                if(low==-1||high==s.length())
                break;
            }
            high=high-low-1;
            a=s.substr(low+1,high);
            if(p.length()<a.length())
            p=a;

            low=i-1;
            high=i;
            while(low >= 0 && high < s.length() && s[low]==s[high]){
                low--;
                high++;
                if(low==-1||high==s.length())
                break;
            }
            high=high-low-1;
            a=s.substr(low+1,high);
            if(p.length()<a.length())
            p=a;
        }
        return p;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
class Solution {
public:
    string smallestPalindrome(string s) {
        string p;
        int n=s.size();
        p=s.substr(0,n/2);
        sort(p.begin(),p.end());
        if(n%2==0){
            for(int i=0;i<(n/2);i++){
                s[i]=p[i];
            }
            reverse(p.begin(),p.end());
            for(int i=(n/2);i<n;i++){
                s[i]=p[i-(n/2)];
            }
        }
        else{
            for(int i=0;i<(n/2);i++){
                s[i]=p[i];
            }
            reverse(p.begin(),p.end());
            for(int i=(n/2 +1);i<n;i++){
                s[i]=p[i-(n/2 +1)];
            }
        }
        return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
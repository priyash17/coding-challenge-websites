class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s==""){
            return 0;
        }
        if(s.length()==1){
            return 1;
        }
        string p,a;
        for(int i=0;i<(s.length()-1);i++){
            if(a.empty()){
                a.push_back(s[i]);
            }
            
            if(a.find(s[i+1])==string::npos){
                a.push_back(s[i+1]);
            }
            else{
                a.erase(0,a.find(s[i+1])+1);
                a.push_back(s[i+1]);
            }
            if(p.length()<a.length()){
                p=a;
            }
        }
        return p.length();
}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
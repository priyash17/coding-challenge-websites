class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1){
            return s;
        }
        vector<string>a(numRows);
        string p="";
        int n=0;
        bool flag=0;
        for(int i=0;i<s.length();i++){
            if(flag==0){
                a[n].push_back(s[i]);
                n++;
            }
            if(flag==1){
                a[n].push_back(s[i]);
                n--;
            }
            if(n==numRows){
                flag=1;
                n--;
                n--;
            }
            if(n==-1){
                flag=0;
                n++;
                n++;
            }
        }
        for(int i=0;i<numRows;i++){
            p=p+a[i];
        }
        return p;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
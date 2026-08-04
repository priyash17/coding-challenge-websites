class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=nums[0];
        int l=0;
        int n=nums.size();
        int j=nums[n-1];
        vector<int> ans;
        for(i;i<=j;i++){
            if( nums[l] == i){
                l++;
            }
            else{
                ans.push_back(i);
        }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
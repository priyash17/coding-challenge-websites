class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int max1,max2,max3,m,n=nums.size();
        nth_element(nums.begin(), nums.begin() + 2, nums.end());
        sort(nums.begin(), nums.begin() + 3);
        nth_element(nums.begin()+2, nums.end() - 3, nums.end());
        sort(nums.end() - 3, nums.end());
        max1=nums[0]*nums[1]*nums[2];
        max3=nums[0]*nums[1]*nums[n-1];
        max2=nums[n-3]*nums[n-2]*nums[n-1];
        m=max({max1,max2,max3});
        return m;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
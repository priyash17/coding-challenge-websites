class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int closest=100000;
        sort(nums.begin(),nums.end());
        for(int k=0;k<=n-3;k++){
            int j=n-1,i=k+1;
            while(i<j){
                int sum=nums[k]+nums[i]+nums[j];
                if(abs(target-sum)<abs(target-closest)){
                    closest=sum;
                }
                if(sum<target)
                i++;
                else
                j--;

            }
        }
        return closest;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
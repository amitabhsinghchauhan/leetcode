class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int n=nums.size();
        sort(nums.begin(),nums.end());
        return nums[n/2];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        int i=-1;
        while(s<=e){
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target){
                e=mid-1;
                mid=s+(e-s)/2;
            }
            else{
                s=mid+1;
                mid=s+(e-s)/2;
            }
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
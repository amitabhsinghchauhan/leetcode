class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0;
        int e=n-1;
        int mid;
        bool flag=false;
        //finding first occurence
        while(s<=e){
            mid=s+(e-s)/2;
            if(nums[mid]==target){
                flag=true;
                e=mid-1;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else s=mid+1;
        }
        int f=s;
        s=0;
        e=n-1;
        // last occurence
        while(s<=e){
            mid=s+(e-s)/2;
            if(nums[mid]==target){
                flag=true;
                s=mid+1;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else s=mid+1;
        }
        int l=e;
        if(flag==true){
            return {f,l};
        }
        else return {-1,-1};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
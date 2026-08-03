class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int low=1, high=n-2;
        if(n==1) return nums[0];
        if(nums[n-1]!=nums[n-2]) return nums[n-1];
        if(nums[0] != nums[1]) return nums[0];
        while(low<=high){
            int mid=(low+high)/2;
            //to check left and right side element for duplicate
            if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]){
                return nums[mid];
            }

            //check for left in array
            if((mid%2==1 && nums[mid]==nums[mid-1]) || (mid%2==0 && nums[mid]==nums[mid+1])){
                low=mid+1;
            }
            //check for right in array
            else{
                high=mid-1;
            }
        }
        return -1;
    }
};
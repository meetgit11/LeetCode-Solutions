class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int low=1, high=n-2;
        if(n==1) return 0;
        if(nums[0]>nums[1]) return 0;
        if(nums[n-1]>nums[n-2]) return n-1;
        while(low<=high){
            int mid=(low+high)/2;
            //for checking the element both sides (left and right) from the element
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                return mid;
            }
            //check for the one side, which is left side, so if mid-1 is smaller than right hadn side has a peak
            else if(nums[mid]>nums[mid-1]){
                low=mid+1;
            }
            //vice versa if peak is not right then it is on left side
            else{
                high=mid-1;
            }
        }
        return -1;
    }
};
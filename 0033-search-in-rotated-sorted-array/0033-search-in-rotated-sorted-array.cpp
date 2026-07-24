class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0, high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target) return mid;

            if(nums[low]<=nums[mid]){            //for left side
                if(nums[low]<=target && target<=nums[mid]){
                    high=mid-1;   //more specific towards left
                }
                else{
                    low=mid+1;           // for right side after left side
                }
            }
            else{                  //for right side
                if(nums[mid]<=target && target<=nums[high]){
                    low=mid+1;            //for left side of the right hand side after mid calculation
                }
                else{
                    high=mid-1;              //for right side of the right hand side after mid calculation
                }
            }
        }
        return -1;
    }
};
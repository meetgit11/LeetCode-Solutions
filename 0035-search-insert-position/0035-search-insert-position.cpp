class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //for(int i=0; i<nums.size(); i++){
        //    if(nums[i]==target){
        //        return i;
        //    }
        //    else if(nums[i]>target){
        //        return i;
        //    }
        //}
        int n=nums.size();
        int low=0, high=n-1;
        int ans=n;
        while(low<=high){
            int mid=(high+low)/2;
            if(nums[mid]>=target){ //look for the left side (smallest)
                ans=mid;
                high=mid-1;
            }
            else{ //look for the right side
                low=mid+1;
            }
        }
    
    return ans;
    
    //return nums.size();
    }
};
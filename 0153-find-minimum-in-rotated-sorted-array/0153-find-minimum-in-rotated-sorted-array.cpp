class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0, high=nums.size()-1;
        int ans=INT_MAX;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[low]<=nums[high]){      //if low is equal to high then
                ans=min(ans, nums[low]);
                break;
            }
            if(nums[low]<=nums[mid]){              //if left half is sorted, low is the minimum element
                ans=min(ans, nums[low]);
                low=mid+1;
            }
            else{          //if right half is sorted, then mid will be automatically will be the minimum
                ans=min(ans, nums[mid]);
                high=mid-1;
            }
        }
        return ans;
    }
};
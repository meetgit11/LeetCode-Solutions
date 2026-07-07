class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=-1;
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }

        //if no non-zero elements are present
        if(j==-1){
            return;
        }

        for(int i=j+1; i<n; i++){
            if(nums[i]!=0){  //if arr[i] is non zero then swap with arr[j]ie0 and j++
                swap(nums[i],nums[j]);
                j++;
            }
        }
        //return nums;
    }
};
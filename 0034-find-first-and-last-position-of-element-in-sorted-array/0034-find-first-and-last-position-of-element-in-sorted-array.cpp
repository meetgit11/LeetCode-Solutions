class Solution {
public:
    int firstO(vector<int> &arr , int n, int x){
            //int n=nums.size();
            int first=-1;
            int low=0, high=n-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(arr[mid]==x){
                    first=mid;
                    high=mid-1;
                }
                else if(arr[mid]<x){
                   low=mid+1;
                }
                else{
                    high=mid-1;
                }

            }
        return first;
    }
    int lastO(vector<int> &arr , int n, int x){
            int last=-1;
            int low=0, high=n-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(arr[mid]==x){
                    last=mid;
                    low=mid+1;
                }
                else if(arr[mid]<x){
                   low=mid+1;
                }
                else{
                    high=mid-1;
                }

            }
        return last;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int first=firstO(nums, n, target);
        if(first==-1) return{-1,-1};
        int last=lastO(nums, n, target);
        return {first, last};
    }
};
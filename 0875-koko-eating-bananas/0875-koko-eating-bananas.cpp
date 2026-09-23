class Solution {
public:
    //to calculate the maximum no of bananas
    int findMax(vector<int> &piles){
        int maxi=INT_MIN;
        int n=piles.size();
        for(int i=0; i<n; i++){
            maxi=max(maxi, piles[i]);
        }
        return maxi;
    }
    //to calculate the total hours
    long long calculatetotalHours(vector<int>& piles, long long hourly){
        long long totalH=0;
        //int n=piles.size();
        for(int i=0; i<piles.size(); i++){
            totalH+=(piles[i]+hourly-1)/hourly;
        }
        return totalH;
    }
    //to calculate the minimum rate of eating bananas
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1, high=findMax(piles);
        while(low<=high){
            int mid=(low+high)/2;
            long long totalH=calculatetotalHours(piles, mid);
            if(totalH<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
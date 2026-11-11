class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1=0, count2=0;
        int ele1=INT_MIN;
        int ele2=INT_MIN;
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(count1==0 && ele2!=nums[i]){        //to check if count1 is 0 and then assign it to 1 and the element to the ele1
                count1=1;
                ele1=nums[i];
            }
            else if(count2==0 && ele1!=nums[i]){  //to check if count2 is 0 and then assign it to 1 and the element to the ele2
                count2=1;
                ele2=nums[i];
            }
            else if(ele1==nums[i]) count1++;
            else if(ele2==nums[i]) count2++;
            else{
                count1--, count2--;
            }
        }
        vector<int> list;  //for storing the elements that are greater than (n/3)
        count1=0, count2=0;
        for(int i=0; i<n; i++){
            if(nums[i]==ele1) count1++;
            if(nums[i]==ele2) count2++;
        }
        int mini=(int)(n/3)+1;
        if(count1>=mini) list.push_back(ele1);
        if(count2>=mini) list.push_back(ele2);
        sort(list.begin(), list.end());     //sorting the list to ensure order is proper otherwise not required..
        return list;
    }
};
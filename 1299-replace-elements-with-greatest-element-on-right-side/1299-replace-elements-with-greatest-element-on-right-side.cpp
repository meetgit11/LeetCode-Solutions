class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans;
        int n=arr.size();
        int maxRight;
        ans.push_back(-1);
        maxRight=ans[0];
        for(int i=n-1; i>0; i--){
            //maxRight=ans[0];
            maxRight=max(maxRight, arr[i]);
            ans.push_back(maxRight);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
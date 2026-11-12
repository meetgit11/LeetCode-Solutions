class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        if (nums.empty()) return 0;

        int maxLength = 1;
        int incLength = 1;
        int decLength = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) {
                incLength++;
                decLength = 1; // Reset decreasing streak
            } else if (nums[i] < nums[i - 1]) {
                decLength++;
                incLength = 1; // Reset increasing streak
            } else {
                incLength = 1;
                decLength = 1; // Reset both if numbers are equal
            }
            
            maxLength = max({maxLength, incLength, decLength});
        }

        return maxLength;
    }
};
class Solution {
public:
    bool isPalindrome(string s) {
        int left=0;
        int right=s.size()-1;
        while(left<right){
            //to skip non-alphanumeric from left
            while(left<right && !isalnum(s[left])){
                left++;
            }
            //to skip na character from right
            while(left<right && !isalnum(s[right])){
                right--;
            }
            //compare characters
            if(tolower(s[left])!=tolower(s[right])){
                return false;
            }
            left++;
            right--;
        }
        return true;
        
    }
};
//209. Minimum Size Subarray Sum
//https://leetcode.com/problems/minimum-size-subarray-sum/submissions/


// Solution :

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX;  // INT_MAX is a macro which represents the maximum integer value. 
        int left = 0;
        int sum = 0;
        for ( int i = 0 ; i <n ; i++){
            sum +=nums[i];
            while( sum >= target){      
                ans = min (ans, i-left+1);    //sliding window i is end and left is start pointer
                sum -= nums[left++];
            }
        }
        
        return( ans != INT_MAX) ? ans : 0;
    }
};

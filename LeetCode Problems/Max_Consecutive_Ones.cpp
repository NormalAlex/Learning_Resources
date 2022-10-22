/* 
Given a binary array nums, return the maximum number of consecutive 1's in the array.

Example 1:

Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.

Example 2:

Input: nums = [1,0,1,1,0,1]
Output: 2

*/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0,max=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)    // when 1 is present increment count
                count++;
            else
                count=0;     // if not then set count to 0 for the next window
          
            if(count>max)    // max will store the previous consecutive max_value 
                max=count;   // and if the current count greater than max assigned it the current value
        }
        return max;
    }
};
Footer

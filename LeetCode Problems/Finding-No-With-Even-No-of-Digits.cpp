/*
1295. Find Numbers with Even Number of Digits

Given an array nums of integers, return how many of them contain an even number of digits.

Example 1:
Input: nums = [12,345,2,6,7896]
Output: 2
Explanation: 
12 contains 2 digits (even number of digits). 
345 contains 3 digits (odd number of digits). 
2 contains 1 digit (odd number of digits). 
6 contains 1 digit (odd number of digits). 
7896 contains 4 digits (even number of digits). 
Therefore only 12 and 7896 contain an even number of digits.

Example 2:
Input: nums = [555,901,482,1771]
Output: 1 
Explanation: 
Only 1771 contains an even number of digits.
*/

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int no_of_even_digitsElement=0,no_of_digits=0;
       for(int i=0;i<nums.size();i++)    // for traversing the array 
       { no_of_digits=0;
          while(nums[i])                 // for counting no of digits of current element of array
          { 
            nums[i]/=10;
            no_of_digits++;
          } 
           
           if(no_of_digits%2==0)        // if even no of digits present, increment no_of_even_digitsElement by 1
               no_of_even_digitsElement++;   
       }
        return no_of_even_digitsElement;
        
    }
};

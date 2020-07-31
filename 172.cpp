/*172. Factorial Trailing Zeroes
Easy

887

1133

Add to List

Share
Given an integer n, return the number of trailing zeroes in n!.

Example 1:

Input: 3
Output: 0
Explanation: 3! = 6, no trailing zero.
Example 2:

Input: 5
Output: 1
Explanation: 5! = 120, one trailing zero.
Note: Your solution should be in logarithmic time complexity.

Accepted
212,852
Submissions
563,085*/
/*
code
*/
class Solution {
public:
    int trailingZeroes(int n) {
        int res = 0;
        long long i = 5;
        
        while((n/i)>0){
            res+=n/i;
            i*=5;
        }
        return res;
    }
};

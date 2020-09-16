/*231. Power of Two
Easy

1018

203

Add to List

Share
Given an integer, write a function to determine if it is a power of two.

Example 1:

Input: 1
Output: true 
Explanation: 20 = 1
Example 2:

Input: 16
Output: true
Explanation: 24 = 16
Example 3:

Input: 218
Output: false
Accepted
368,694
Submissions
842,897*/
/*
code
*/
class Solution {
  public:
    bool isPowerOfTwo(int n) {
      long long res = 2;
      if (n == 1) return true;

      while (n >= res) {
        if (n == res)
          return true;
        else res*=2;
      }

      return false;
    }
};

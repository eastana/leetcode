/*
1281. Subtract the Product and Sum of Digits of an Integer
Easy

270

94

Add to List

Share
Given an integer number n, return the difference between the product of its digits and the sum of its digits.
 

Example 1:

Input: n = 234
Output: 15 
Explanation: 
Product of digits = 2 * 3 * 4 = 24 
Sum of digits = 2 + 3 + 4 = 9 
Result = 24 - 9 = 15
Example 2:

Input: n = 4421
Output: 21
Explanation: 
Product of digits = 4 * 4 * 2 * 1 = 32 
Sum of digits = 4 + 4 + 2 + 1 = 11 
Result = 32 - 11 = 21
 

Constraints:

1 <= n <= 10^5
Accepted
78,484
Submissions
92,452
*/
/*
code
*/
class Solution {
  public:
    int subtractProductAndSum(int n) {
      int num = n;
      int some = n;
      int count = 0;

      while (true) {
        n /= 10;
        count++;
        if (n < 1) {
          break;
        }
      }

      vector < int > res;

      for (int i = 0; i < count; i++) {
        num %= 10;
        res.push_back(num);
        some /= 10;
        num = some;
      }

      int result1 = 1;
      int result2 = 0;

      for (int i = 0; i < count; i++) {
        result1 *= res[i];
        result2 += res[i];
      }
      int ress = result1 - result2;
      return ress;

    }
};

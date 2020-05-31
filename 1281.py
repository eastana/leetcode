"""
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
"""
class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        counter = 0

        num = n
        while True:
            num /= 10
            counter += 1
            if num < 1:
                break

        a = n
        y = n

        arr = []
        arr.append(a)

        for x in range(counter):
            y %= 10
            arr.append(y)
            a /= 10
            y = int(a)

        sum = 0
        prod = 1

        for x in range(counter + 1):
            if x == 0:
                continue
            else:
                sum += int(arr[x])
                prod *= int(arr[x])

        res = prod - sum
        return res

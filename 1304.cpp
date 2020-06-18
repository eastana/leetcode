/*Given an integer n, return any array containing n unique integers such that they add up to 0.

 

Example 1:

Input: n = 5
Output: [-7,-1,1,3,4]
Explanation: These arrays also are accepted [-5,-1,1,2,3] , [-3,-1,2,-2,4].
Example 2:

Input: n = 3
Output: [-1,0,1]
Example 3:

Input: n = 1
Output: [0]
 

Constraints:

1 <= n <= 1000*/
/*
code
*/

class Solution {
public:
    vector < int > sumZero(int n) {
      vector < int > arr;
      if (n == 1) {
        arr.push_back(0);
        return arr;
      } else {
        if (n % 2 != 0) {
          int center = n / 2;
          int num = n - 1;
          int m = num / 2;
          num -= num * 2;
          for (int i = 0; i < n; i++) {
            if (i == center) {
              arr.push_back(0);
              num -= num * 2;
              num++;
              continue;
            } else {
              arr.push_back(num);
              num++;

            }

          }

        }
          else{
          int num = n - 1;
          int m = num / 2;
          num -= num * 2;
          for (int i = 0; i < n; i++) {
            if (i == m+1) {
              num -= num * 2;
              num++;
              arr.push_back(num);
              num++;
            } else {
              arr.push_back(num);
              num++;
            }

          }

          }

        return arr;
      }
    }
};

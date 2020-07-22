/*1299. Replace Elements with Greatest Element on Right Side
Easy

374

86

Add to List

Share
Given an array arr, replace every element in that array with the greatest element among the elements to its right, and replace the last element with -1.

After doing so, return the array.

 

Example 1:

Input: arr = [17,18,5,4,6,1]
Output: [18,6,6,6,1,-1]
 

Constraints:

1 <= arr.length <= 10^4
1 <= arr[i] <= 10^5
Accepted
57,650
Submissions
75,955*/
/*
code
*/
class Solution {
public:
 
    vector<int> replaceElements(vector<int>& arr) {
       int max = -1, temp;
        
       for(int i=arr.size()-1;i>=0;i--){
           temp = arr[i];
           arr[i] = max;
           if(max<temp){
               max = temp;
           }
       }
        return arr;
    }
};

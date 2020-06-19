/*561. Array Partition I
Easy

787

2440

Add to List

Share
Given an array of 2n integers, your task is to group these integers into n pairs of integer, say (a1, b1), (a2, b2), ..., (an, bn) which makes sum of min(ai, bi) for all i from 1 to n as large as possible.

Example 1:
Input: [1,4,3,2]

Output: 4
Explanation: n is 2, and the maximum sum of pairs is 4 = min(1, 2) + min(3, 4).
Note:
n is a positive integer, which is in the range of [1, 10000].
All the integers in the array will be in the range of [-10000, 10000].
*/
/*
code
*/
class Solution {
public:
    int partition(vector < int > & a, int start, int end) {
      int pivot = a[end];
      int P_index = start;
      for (int i = start; i < end; i++) {
        if (a[i] <= pivot) {
          swap(a[i], a[P_index]);
          P_index++;
        }
      }
      swap(a[end], a[P_index]);
      return P_index;
    }
    
    
  void quicksort(vector < int > & a, int start, int end) {
    if (start < end) {
      int P_index = partition(a, start, end);
      quicksort(a, start, P_index - 1);
      quicksort(a, P_index + 1, end);
    }
  }
    
    int arrayPairSum(vector<int>& nums) {
        vector<int> res(nums.size());
        
        quicksort(nums,0,nums.size()-1);
        
        
        for(int i=0;i<nums.size();i++){
            if(i==0){
                res[i]=nums[i];
                continue;
            }
            else if(i%2==0){
                res[i]=nums[i];
            }
            else{
                continue;
            }
        }
        
        int result=0;
        
        for(int i=0;i<res.size();i++){
            result+=res[i];
        }
        return result;
    }
};

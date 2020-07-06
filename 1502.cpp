/*1502. Can Make Arithmetic Progression From Sequence
Easy

16

0

Add to List

Share
Given an array of numbers arr. A sequence of numbers is called an arithmetic progression if the difference between any two consecutive elements is the same.

Return true if the array can be rearranged to form an arithmetic progression, otherwise, return false.

 

Example 1:

Input: arr = [3,5,1]
Output: true
Explanation: We can reorder the elements as [1,3,5] or [5,3,1] with differences 2 and -2 respectively, between each consecutive elements.
Example 2:

Input: arr = [1,2,4]
Output: false
Explanation: There is no way to reorder the elements to obtain an arithmetic progression.
 

Constraints:

2 <= arr.length <= 1000
-10^6 <= arr[i] <= 10^6
Accepted
7,640
Submissions
9,442*/
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
    
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n = arr.size();
        quicksort(arr,0,n-1);
        
        
        
        bool check = true;
        int c = arr[1] - arr[0];
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]!=c){
              check = false;
              break;
            }
        } 

        return check;
        
    }
};

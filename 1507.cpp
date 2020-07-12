/*1507. Reformat Date
Easy

16

59

Add to List

Share
Given a date string in the form Day Month Year, where:

Day is in the set {"1st", "2nd", "3rd", "4th", ..., "30th", "31st"}.
Month is in the set {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"}.
Year is in the range [1900, 2100].
Convert the date string to the format YYYY-MM-DD, where:

YYYY denotes the 4 digit year.
MM denotes the 2 digit month.
DD denotes the 2 digit day.
 

Example 1:

Input: date = "20th Oct 2052"
Output: "2052-10-20"
Example 2:

Input: date = "6th Jun 1933"
Output: "1933-06-06"
Example 3:

Input: date = "26th May 1960"
Output: "1960-05-26"
 

Constraints:

The given dates are guaranteed to be valid, so no error handling is necessary.
Accepted
5,773
Submissions
9,574*/
/*
code
*/
class Solution {
  public:
    string reformatDate(string date) {
      string res;
      int n = date.size();
      res = date.substr(n - 4) + "-";
      vector < string > month = {
        "Jan",
        "Feb",
        "Mar",
        "Apr",
        "May",
        "Jun",
        "Jul",
        "Aug",
        "Sep",
        "Oct",
        "Nov",
        "Dec"
      };

      int k = 1;
      for (int j = 0; j < n; j++) {
        if (date.substr(n - 8, 3) == month[j]) {

          if (k < 10) res += "0";
          string str = to_string(k);
          res += str + "-";
          break;
        } else {
          k++;
        }
      }
      int i = 0;
      string res1;
      while (date[i] >= '0' && date[i] <= '9') {
        res1 += date[i];
        i++;
      }
      if (res1.size() < 2) {
        res1 = "0" + res1;
      }

      return res + res1;

    }
};

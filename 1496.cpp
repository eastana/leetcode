/*1496. Path Crossing
Easy

91

3

Add to List

Share
Given a string path, where path[i] = 'N', 'S', 'E' or 'W', each representing moving one unit north, south, east, or west, respectively. You start at the origin (0, 0) on a 2D plane and walk on the path specified by path.

Return True if the path crosses itself at any point, that is, if at any time you are on a location you've previously visited. Return False otherwise.

 

Example 1:



Input: path = "NES"
Output: false 
Explanation: Notice that the path doesn't cross any point more than once.
Example 2:



Input: path = "NESWW"
Output: true
Explanation: Notice that the path visits the origin twice.
 

Constraints:

1 <= path.length <= 10^4
path will only consist of characters in {'N', 'S', 'E', 'W}
Accepted
11,153
Submissions
20,004*/
/*
code
*/
class Solution {
public:
    bool isPathCrossing(string path) {
  set<pair<int, int>> v;
  v.insert({0,0});
  int x=0;
  int y=0;
  for(int i=0;i<path.size();i++){
    if(path[i]=='N'){
      x++;
    }
    else if(path[i]=='W'){
      y++;
    }
    else if(path[i]=='E'){
      y--;
    }
    else if(path[i]=='S'){
      x--;
    }
    if(v.insert({x,y}).second == false)
     return true;
  }
  return false;
 
    }
};

#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long
#define ll long long
#define vint vector<int>
#define vstr vector<string>
#define vdbl <double>
#define pb push_back

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

void merge(vector < int > & a, int left, int right, int mid) {
  int n1 = mid - left + 1;
  int n2 = right - mid;
  int l[1000], r[1000];
  for (int i = 0; i < n1; i++)
    l[i] = a[left + i];
  for (int j = 0; j < n2; j++)
    r[j] = a[mid + 1 + j];
  int i = 0, j = 0, k = left;
  while (i < n1 && j < n2) {
    if (l[i] <= r[j]) {
      a[k] = l[i];
      i++;
    } else {
      a[k] = r[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    a[k] = l[i];
    i++;
    k++;
  }

  while (j < n2) {
    a[k] = r[j];
    j++;
    k++;
  }
}
void mergesort(vector < int > & a, int left, int right) {
  if (left < right) {
    int mid = (left + right) / 2;
    mergesort(a, left, mid);
    mergesort(a, mid + 1, right);
    merge(a, left, right, mid);
  }
}

bool binsearch(vector<int> &a, int left, int right, int f){
  while(left<=right){
      int mid=(left+right)/2;
      if(a[mid]==f){
          return true;
      } else if(f>a[mid]){
          left=mid+1;
      } else{
          right=mid-1;
      }
  }
    return false;
}


int main() {
    



    return 0;
}

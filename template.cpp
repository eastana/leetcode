#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long
#define vint vector < int >
#define vstr vector < string >
#define vdbl < double >
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

bool binsearch(vector < int > & a, int left, int right, int f) {
  while (left <= right) {
    int mid = (left + right) / 2;
    if (a[mid] == f) {
      return true;
    } else if (f > a[mid]) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }
  return false;
}

int main() {
  int n;
  cin >> n;
  vint arr;
  for (int i = 0, k; i < n; i++) {
    cin >> k;
    arr.pb(k);
  }

  return 0;
}

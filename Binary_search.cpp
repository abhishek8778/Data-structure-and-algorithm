#include<bits/stdc++.h>
using namespace std;


int bin(int array[], int x, int low, int high) {
  if (high >= low) {
    int mid = low + (high - low) / 2;

    // If found at mid, then return it
    if (array[mid] == x)
      return mid;

    // Search the left half
    if (array[mid] > x)
      return bin(array, x, low, mid - 1);

    // Search the right half
    return bin(array, x, mid + 1, high);
  }

  return -1;
}
int main() {



	int n;
	cin >> n;

	int ans[n];

	for (int i = 0; i < n; i++) {
		cin >> ans[i];
	}

	int k;
	cin >> k;

	cout << bin(ans,k,0,n);
}

#include<bits/stdc++.h>
using namespace std;


bool search(int x[], int n, int k) {
    int p = 0;
    for (int a = n; a >= 1; a /= 2) {
        while (p+a < n && x[p+a] <= k) p += a;
    }
    return x[p] == k;
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

	cout << bin(ans, n, k);
}

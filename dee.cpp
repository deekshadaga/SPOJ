#include<bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	//get input from input1.txt
	freopen("input1.txt", "r", stdin);
	//write output in output1.txt
	freopen("output1.txt", "w", stdout);
#endif

	int n, temp;
	cin >> n;
	int a[n + 1] = {0};
	for (int i = 1; i < n + 1; i++) {
		cin >> temp;
		a[i] = a[i - 1] + temp;
	}
	int t;
	cin >> t;
	while (t--) {
		int f, l;
		cin >> f >> l;
		cout << a[l + 1] - a[f] << endl;
	}
}
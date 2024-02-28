#include <bits/stdc++.h>
 
using namespace std;
 
int n, a;
 
int main() {
	cin >> n;
	int arr[n];
	
	for (int i = 0; i < n; i++) {
		cin >> a;
		arr[i] = a;
	}
	
	sort(arr, arr+n);
	
	int i = 1;
	while (i < n && arr[i] == arr[0]) {
	  i++;
	}
	
	int c = i;
	i = n-1;
	while (i >= c && arr[n-1] == arr[i]) {
	  i--;
	}
	
	c += (n - i - 1);
	
	cout << n - c;
}

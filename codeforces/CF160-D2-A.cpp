#include <bits/stdc++.h>
 
using namespace std;
 
int n, a;
 
int main() {
	cin >> n;
	int sum = 0;
	int arr[n];
	for (int i = 0; i < n; i++) {
	    cin >> a;
	    arr[i] = a;
	    sum += a;
	}
	
	sort(arr, arr + n);
    
    int r_sum = 0;
    int i = n-1;
    for (; i>=0; i--) {
        r_sum += arr[i];
        
        if (2*r_sum > sum) break;
    }
    
    cout << n - i;
}

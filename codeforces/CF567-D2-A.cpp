#include <iostream>

using namespace std;

int n, a;

int main() {
	cin >> n;
	int arr[n];
	
	for (int i = 0; i < n; i++) {
		cin >> a;
		arr[i] = a;
	}
	
	cout << arr[1] - arr[0] << " " << arr[n-1] - arr[0] << endl;
	for (int i = 1; i < n-1; i++) {
		cout << min(arr[i] - arr[i-1], arr[i+1] - arr[i]) << " " << max(arr[n-1] - arr[i], arr[i] - arr[0]) << endl;
	}
	cout << arr[n-1] - arr[n-2] << " " << arr[n-1] - arr[0] << endl;
}

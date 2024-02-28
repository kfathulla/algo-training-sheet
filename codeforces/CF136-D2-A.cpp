#include <iostream>

using namespace std;

int n, a;

int main() {
	cin >> n;
	int res[n];
	
	for (int i = 1; i <= n; i++) {
		cin >> a;
		res[a-1] = i;
	}
	
	for (int i = 0; i < n; i++) cout << res[i] << " ";
}

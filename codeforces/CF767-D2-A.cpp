#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int n, a;

int main() {
	cin >> n;
	int arr[n+1];
	for (int i = 0; i < n; i++) {
		cin >> a;
		arr[a-1] = i;
	}
	
	int line = arr[n-1];
	for (int i = n-2; i >= 0; i--) {
		if (arr[i] < line) {
			arr[i] = line;
		} else {
			line = arr[i];
		}
	}
	
	vector<vector<int>> res;
	res.resize(n);
	for (int i = 0; i < n; i++) {
		res[arr[i]].push_back(i);
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = res[i].size() - 1; j >= 0; j--) { 
            cout << res[i][j]+1 << " "; 
        }     
        
        cout << endl;
	}
}

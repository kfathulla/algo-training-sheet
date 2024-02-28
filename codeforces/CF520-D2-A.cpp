#include <bits/stdc++.h>
 
using namespace std;
 
int n;
string s;
 
int main() {
	cin >> n >> s;
	int arr[26];
	memset(arr, 0, sizeof(arr)); 
	for (int i = 0; i < n; i++) {
	    arr[((int) s.at(i) - (toupper(s.at(i)) == s.at(i) ? 65 : 97))] = 1;
	}
	
	int s = 0;
	for (int i = 0; i < 26; i++) s+=arr[i];
	cout << (s == 26 ? "YES" : "NO"); 
}

#include <iostream>

using namespace std;

string a, b;

int main() {
	cin >> a >> b;
	
	if (a.length() != b.length() || a != b) cout << max(a.length(), b.length());
	else cout << -1;
}

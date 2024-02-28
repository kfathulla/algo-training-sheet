#include <bits/stdc++.h>
 
using namespace std;
 
string s, str;
 
int main() {
    string l = "qwertyuiopasdfghjkl;zxcvbnm,./";
	cin >> s >> str;
	
	for (int i = 0; i < str.length(); i++){
	    str[i] = l[l.find(str[i]) + (s == "R" ? -1 : 1)];
	}
	
	cout << str;
}

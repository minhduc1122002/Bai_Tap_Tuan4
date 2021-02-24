#include<iostream>
#include<cstring>
using namespace std;
string reverse(string s) {
	string s2;
	for(int i=s.length()-1;i>=0;i--) {
		s2=s2+s[i];
	}
	return s2;
}
int main() {
	int n;
	cin >> n;
	string s[n];
	for(int i=0;i<n;i++) {
		cin >> s[i];
	}
	string password;
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			if(reverse(s[i])==s[j] && i!=j) {
				password=s[i];
				break;
			}
		}
	}
	cout << password.length() << " " << password[password.length()/2];
	return 0;
}

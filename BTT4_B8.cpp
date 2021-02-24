#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	double nu[n],nam[n];
	for(int i=0;i<n;i++) {
		cin >> nu[i] >> nam[i];
	}
	sort(nu,nu+n);
	sort(nam,nam+n);
	for(int i=0;i<n;i++) {
		if(nam[i]<=nu[i]) {
			cout << "No";
			return 0;
		}
	}
	cout << "Yes";
	return 0;
}

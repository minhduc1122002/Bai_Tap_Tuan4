#include<iostream>
using namespace std;
int main() {
	int T;
	cin >> T;
	for(int j=1;j<=T;j++) {
		int n;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++) {
			cin >> a[i];
		}
		int i=0;
		while(i<n) {
			int sum1=0;
			int sum2=0;
			for(int x=0;x<i;x++) {
				sum1+=a[x];
			}
			for(int x=n-1;x>i;x--) {
				sum2+=a[x];
			}
			if(sum1==sum2) {
				cout << "YES" << endl;
				break;
			}
			i++;
		}
		if(i==n) {
			cout << "NO" << endl;
		}
	}
	return 0;
}

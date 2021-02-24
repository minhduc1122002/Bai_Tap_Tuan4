#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n][n];
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			a[i][j]=0;
		}
	}
	int x,y;
	for(int i=1;i<=n;i++) {
		cin >> x >> y;
		a[x][y]=1;
	}
	int i=0;
	while(i<n) {
		int count_doc=0,count_ngang=0,count_cheo=0;
		for(int j=0;j<n;j++) {
			if(a[i][j]==1) {
				count_ngang++;
			}
			if(a[j][i]==1) {
				count_doc++;
			}
		}
		int temp=i;
		int x=0;
		while(temp<n && x<n) {
			if(a[temp][x]==1) {
				count_cheo++;
			}
			temp++;
			x++;
		}
		if(count_doc>1 || count_ngang>1 || count_cheo>1) {
			cout << "No";
			return 0;
		}
		i++;
	}
	cout << "Yes";
	return 0;
}

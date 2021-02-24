#include<iostream>
#include<cstring>
using namespace std;
int main() {
	int n,m;
	cin >> n >> m;
	string s1;
	cin >> s1;
	int x,y;
	for(int i=1;i<=m;i++) {
		cin >> x >> y;
		int L=y-1+1-(x-1);
		string s2;
		for(int j=x-1;j<y;j++) {
			s2=s2+s1[j];
		}
		int count=1;
		int temp1=x-1+L,temp2=y-1+L;
		while(temp1<n && temp2<n) {
			string s3;
			for(int j=temp1;j<=temp2;j++) {
				s3=s3+s1[j];
			}
			if(s3==s2) {
				count++;
			}
			else {
				break;
			}
			temp1+=L;
			temp2+=L;
		}
		cout << count;
	}
	return 0;
}

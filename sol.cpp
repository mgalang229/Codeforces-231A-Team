#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a[1000][3], n, cnt, t = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 3; j++){
			cin >> a[i][j];
			if(a[i][j] == 1){
				cnt++;	
			}
		}
		if(cnt > 1){
			t++;
		}
		cnt = 0;
	}
	cout << t << "\n";
	return 0;
}
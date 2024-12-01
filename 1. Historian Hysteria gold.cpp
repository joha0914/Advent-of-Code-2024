#include<bits/stdc++.h>
using namespace std;

int const N = 1000;
int a[N];
map<int, int> m;
int main () {
	for(int i = 0; i < N; i ++) {
		int x;
		
		cin >> a[i] >> x;
		m[x] ++;
	}
	
	long long sum = 0;
	
	for(int i = 0; i < N; i ++) sum += a[i] * m[a[i]];
	
	
	cout << sum;
}
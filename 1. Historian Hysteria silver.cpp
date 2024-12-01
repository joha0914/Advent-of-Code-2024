#include<bits/stdc++.h>
using namespace std;

int const N = 1000;
int a[N], b[N];
int main () {
	for(int i = 0; i < N; i ++) {
		cin >> a[i] >> b[i];
	}
	
	sort(a,a + N);
	sort(b,b + N);
	
	int sum = 0;
	
	for(int i = 0; i < N; i ++) sum += abs(a[i] - b[i]);
	
	
	cout << sum;
}
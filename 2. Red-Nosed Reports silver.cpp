#include<bits/stdc++.h>
using namespace std;

int const N = 1000;
int a[N];
map<int, int> m;
int cnt;
#define deb(x) cout << #x << " = " << x << '\n'
vector<int> v;

vector<int> make_vector(string input) {
	vector<int> result;
    stringstream ss(input);
    int number;

    while (ss >> number) {
        result.push_back(number);
    }

    return result;
}

int solve(vector<int> org) {
	vector<int> a = org, b = org;
	
	sort(a.begin(), a.end());
	sort(b.rbegin(), b.rend());
	
	bool flg = true;
	
	for(int i = 0; i < org.size(); i ++) {
		if (i > 0 && !(abs(org[i] - org[i - 1]) >= 1 && abs(org[i] - org[i - 1]) <= 3)) {
			
			flg = false;
			break;
		}
		if(org[i] != a[i]) {
			flg = false;
			break;
		}
	}
	
	if (flg) return 1;
	
	flg = true;
	for(int i = 0; i < org.size(); i ++) {
		if (i > 0 && !(abs(org[i] - org[i - 1]) >= 1 && abs(org[i] - org[i - 1]) <= 3)) {
			flg = false;
			break;
		}
		
		if(org[i] != b[i]) {
			flg = false;
			break;
		}
	}
	
	if (flg) return 1;
	return 0;
}
int main () {
	int t = N;
	
	while(t --> 0) {
		string s;
		getline(cin, s);
		
		vector<int> org = make_vector(s);
			
		if(solve(org)) {
			cnt ++;
		}
	}
	
	cout << cnt;
}
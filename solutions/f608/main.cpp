#include<bits/stdc++.h>
using namespace std;

struct st{
	int x, y;
};

bool cmp(st& a, st& b) {
	if(a.x != b.x) return a.x < b.x;
	else return a.y < b.y;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int n, a, b;
	cin >> n;
	vector<st> v(n);
	for(int i = 0; i < n; i++) {
		cin >> a >> b;
		v[i].x = a, v[i].y = b;
	}
	sort(v.begin(), v.end(), cmp);
	
	vector<int> lis;
	for(int i = 0; i < n; i++) {
		int val = v[i].y;
		auto it = upper_bound(lis.begin(), lis.end(), val);
		if(it == lis.end()) { // 確定 y 比之前都大放入
			lis.push_back(val);
		} else{ // 原序列有比較大的值，挑小的(目前) 
			*it = val;
		}
	}
	cout << lis.size();
}

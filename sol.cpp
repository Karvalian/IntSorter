#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t = 100;
	vector<int> cool;
	for(int i = 0; i<t; i++){
		int n;
		cin >> n;
		cool.push_back(n);
		sort(cool.begin(), cool.end());
	}
	for(int a : cool){
		cout << a << endl;
	}
	cout << "Press any key to exit." << endl;
	int kk;
	cin >> kk;

}

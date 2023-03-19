#include <iostream>
using namespace std;

int main() {
	freopen("data.in", "r", stdin);
	int t;
	cin >> t;
	while(t--) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		int step = y2 - y1;
		if(step + x1 < x2) cout << -1 << endl;
		else cout << (step + x1 - x2 + step) << endl;
	}

}
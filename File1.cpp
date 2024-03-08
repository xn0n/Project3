#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void sorting() {
	vector<int> v = { 5,3,1,2,4 };

	sort(v.begin(), v.end());

	for (int x : v) {
		cout << x << " ";
	}
}

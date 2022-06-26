#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <queue>
#include<set>
#include <unordered_set>
#include<unordered_map>
#include<string>
#define mod 1000000007;
using namespace std;

int main() {
	int N;
	cin >> N;
	map<int, set<string>> marks_map;
	while (N--) {
		string name;
		int mark;
		cin >> name >> mark;
		marks_map[mark].insert(name);
	}
	auto current_it = --marks_map.end();
	while (true) {
		int mark = current_it->first;
		auto &names = current_it->second;
		for (auto &it : names) {
			cout << it << " " << mark << endl;
		}
		if (current_it == marks_map.begin()) break;
		current_it--;
	}

	return 0;
}

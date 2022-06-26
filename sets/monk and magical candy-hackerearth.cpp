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
	int T;
	cin >> T;
	while (T--) {
		int n, k;
		cin >> n >> k;
		multiset<long long int> candies;
		for (int i = 0; i < n; i++) {
			long long int single_bag_candy;
			cin >> single_bag_candy;
			candies.insert(single_bag_candy);
		}
		long long int total_candies = 0;
		while (k--) {
			auto last_bag = --candies.end();
			long long int last_bag_candy = *last_bag;
			total_candies += last_bag_candy;
			// deleting only last bag
			candies.erase(last_bag);
			candies.insert(last_bag_candy / 2);
			
		}
		cout << total_candies << endl;
	}
	return 0;
}

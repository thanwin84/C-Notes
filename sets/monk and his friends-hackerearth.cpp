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
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	while (T--) {
		int N, M;
		cin >> N >> M;
		set<long long int> candies;
		while (N--){
			long long int single_person_candies;
			cin >> single_person_candies;
			candies.insert(single_person_candies);
		}
		while (M--){
			long long int upcoming_student_candies;
			cin >> upcoming_student_candies;
			auto it = candies.find(upcoming_student_candies);
			if ( it != candies.end()){
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}
			candies.insert(upcoming_student_candies);

		}
	}
	return 0;
}

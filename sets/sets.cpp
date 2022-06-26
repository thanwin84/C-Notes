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

void print_set(set<string> s) {
	for (auto it : s) {
		cout << it << endl;
	}
}
void print_unoredred_set(unordered_set<string> &s) {
	for (auto it : s) {
		cout << it << endl;
	}
}

int main() {
	set<string> s;
	s.insert("abc");
	s.insert("kdht");
	s.insert("bad");
	s.insert("abc");
	
	// checking if item exists
	/*auto it = s.find("abk");
	cout << (*it) << endl;*/
	auto it = s.find("abclo");
	if (it != s.end()) {
		s.erase(it);
	}
	unordered_set<string> us;
	us.insert("abc");
	us.insert("kdht");
	us.insert("bad");
	us.insert("abc");
	auto temp = us.find("abcki");
	if (temp != us.end()) {
		cout << "Found" << endl;
	}

	//print_unoredred_set(us);
	multiset<string> ms;
	ms.insert("abc");
	ms.insert("abc");
	ms.insert("kdh");
	ms.insert("bck");
	for (auto it : ms) {
		cout << it << endl;
	}
	// it wil delete all abc
	ms.erase("abc");
	// last iterator
	auto last = --ms.end();
	// deleting only last iterator
	ms.erase(last);
	return 0;
}

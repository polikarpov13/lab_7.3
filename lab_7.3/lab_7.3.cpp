#include <iostream>
#include <string>
#include <set>

using namespace std;

set<char> find(string text) {
	set<char> result;

	set<char> filter = { ',', '.', ':', ';', '!', '?' };

	for (char c : filter) {

		int n = count(text.begin(), text.end(), c);

		if (n == 1) result.insert(c);

	}

	return result;
}



int main() {
	string text = "std set is an associative container, that contains a sorted set of unique objects of type Key.!";

	set<char> s = find(text);

	cout << "text: " << text << endl;

	cout << "set: { ";

	for (char c : s) {
		cout << c << " ";
	}

	cout << "}" << endl;

	cout << "size: " << s.size() << endl;

	return 0;
}
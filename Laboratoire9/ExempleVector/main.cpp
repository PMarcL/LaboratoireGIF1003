#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> tableau1;
	tableau1.push_back(10);
	tableau1.push_back(11);
	tableau1.push_back(12);

	for (size_t i = 0; i < tableau1.size(); i++) {
		cout << tableau1[i] << " ";
	}

	return 0;
}

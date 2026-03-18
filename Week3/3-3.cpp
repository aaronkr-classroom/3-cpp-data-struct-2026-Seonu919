#include <iostream>
#include <string>
#include <ios>
#include <iomanip> 
#include <vector>
#include <algorithm> 
using namespace std;

int main() {
	
	string word;
	vector<string> All_words;
	cout << "Input word: ";
	
	while (cin >> word) {
		All_words.push_back(word);
	}
	if (All_words.empty()) {
		cout << "입력된 단어가 없습니다." << endl;
		return 0;
	}
	typedef vector<double>::size_type vec_sz;
	vec_sz size = All_words.size();
	sort(All_words.begin(), All_words.end());
	for (int i = 0; i < All_words.size(); i++) {
		cout << All_words[i] << " ";
	}
	cout << endl;
	cout << "\n[정렬된 단어 빈도수 결과]\n";

	int count = 1; 
	for (int i = 0; i < All_words.size(); i++) {
		if (i + 1 < All_words.size() && All_words[i] == All_words[i + 1]) {
			count++;
		}
		else {
			cout << All_words[i] << " : " << count << "회" << endl;
			count = 1; 
		}
	}
	return 0;
}
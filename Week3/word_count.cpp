//word_count.cpp
#include <algorithm> 
#include <iostream>
#include <ios>
#include <string>
#include <vector>


using namespace std;

int main() {
	//프로그램 설명 출력
	cout << "Enter all words, then EOF: ";
	vector<string> words;

	// 입력 받기
	string word;
	while (cin >> word) {
		words.push_back(word);
	}

	// { word: count } 출력
	for (int i = 0; i < word.size(); i++) {
		cout << word[i] << ": " <<
			count(words.begin(), words.end(), words[i]);

	}
	// 마지막 결과
	cout << "words: " << words.size();

	return 0;
}
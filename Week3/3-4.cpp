#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

int main() {
    string word;
    vector<string> All_words;
    cout << "Input words : ";

    while (cin >> word) {
        All_words.push_back(word);
    }

    if (All_words.empty()) {
        cout << "입력된 단어가 없습니다." << endl;
        return 0;
    }

    // 초기값 설정 (첫 번째 단어로 시작)
    string shortest = All_words[0];
    string longest = All_words[0];

    for (string s : All_words) {
        if (s.length() < shortest.length()) {
            shortest = s;
        }
        if (s.length() > longest.length()) {
            longest = s;
        }
    }

    cout << endl;
    cout << "[결과 출력]" << endl;
    cout << "가장 짧은 단어: " << shortest << " (길이: " << shortest.length() << ")" << endl;
    cout << "가장 긴 단어: " << longest << " (길이: " << longest.length() << ")" << endl;

    return 0;
}
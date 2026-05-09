#include <iostream>
#include <set>
#include <string>
#include <sstream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string line1, line2;
    getline(cin, line1);
    getline(cin, line2);

    set<string> words1;
    set<string> result;

    stringstream ss1(line1), ss2(line2);
    string word;

    while (ss1 >> word) {
        words1.insert(word);
    }

    while (ss2 >> word) {
        if (words1.count(word)) {
            result.insert(word);
        }
    }

    for (auto& w : result) {
        cout << w << " ";
    }

    return 0;
}
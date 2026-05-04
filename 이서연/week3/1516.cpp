#include <iostream>
#include <map>
#include <string>
#include <sstream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string line;
    while (getline(cin, line)) {
        if (line == "END") break;

        stringstream ss(line);
        string word;
        map<string, int> m;

        while (ss >> word) {
            m[word]++;
        }
        for (auto p : m) {
            cout << p.first << " : " << p.second << endl;
        }

    }
    return 0;
}